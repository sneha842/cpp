#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter a character"<<endl;
    cin>>c;

    switch (c){
        case 'A':
        case 'a':
         cout<<"Ajit"<<endl;
         break;

         case 'P':
         case 'p':
         cout<<"Payal"<<endl;
         break;
        
        case 'T':
        case 't':
        cout<<"Atanu"<<endl;
        break;

        case 'S':
        case 's':
         cout<<"Sneha"<<endl;
         break;

         default:
          cout<<"ERROR!";
       
    }

    return 0;
}

