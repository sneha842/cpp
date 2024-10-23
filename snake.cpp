#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int BOARD_SIZE = 100;

int board[BOARD_SIZE + 1] = {0}; // Initialize the board with all 0s
vector<pair<int, int>> snakes;
vector<pair<int, int>> ladders;

void setup() {
    // Add snakes and ladders (replace with your desired positions)
    snakes.push_back({17, 7});
    snakes.push_back({54, 35});
    snakes.push_back({62, 19});
    ladders.push_back({6, 22});
    ladders.push_back({21, 91});
    ladders.push_back({42, 67});
}

int rollDice() {
    return rand() % 6 + 1;
}

void movePlayer(int &playerPosition, int diceRoll) {
    playerPosition += diceRoll;
    if (playerPosition > BOARD_SIZE) {
        playerPosition = BOARD_SIZE;
    }

    // Check for snakes and ladders
    for (const auto &snake : snakes) {
        if (playerPosition == snake.first) {
            playerPosition = snake.second;
            cout << "Oops! A snake bit you. You moved back to position " << playerPosition << endl;
            break;
        }
    }

    for (const auto &ladder : ladders) {
        if (playerPosition == ladder.first) {
            playerPosition = ladder.second;
            cout << "Yay! You climbed a ladder. You moved to position " << playerPosition << endl;
            break;
        }
    }
}

bool checkWin(int playerPosition) {
    return playerPosition == BOARD_SIZE;
}

int main() {
    srand(time(0)); // Seed the random number generator

    setup();

    int numPlayers;
    cout << "Enter the number of players: ";
    cin >> numPlayers;

    vector<int> playerPositions(numPlayers, 1); // Initialize player positions

    while (true) {
        for (int playerIndex = 0; playerIndex < numPlayers; ++playerIndex) {
            cout << "Player " << playerIndex + 1 << "'s turn. Press Enter to roll the dice." << endl;
            cin.ignore();

            int diceRoll = rollDice();
            cout << "You rolled a " << diceRoll << endl;

            movePlayer(playerPositions[playerIndex], diceRoll);

            if (checkWin(playerPositions[playerIndex])) {
                cout << "Player " << playerIndex + 1 << " wins!" << endl;
                return 0;
            }
        }
    }

    return 0;
}