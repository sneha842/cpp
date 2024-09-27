#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter an alphabet"<<endl;
    cin>>c;

    switch(c){
        case 'a':
        case 'A':
         cout<<"it's a vowel";
         break;

        case 'e':
        case 'E':
         cout<<"it's a vowel";
         break;

        case 'i':
        case 'I':
         cout<<"it's a vowel";
         break;

        case 'o':
        case 'O':
         cout<<"it's a vowel";
         break;

        case 'u':
        case 'U':
         cout<<"it's a vowel";
         break;

        default:
         cout<<"it's a consonant"<<endl;
    }
    return 0;
}