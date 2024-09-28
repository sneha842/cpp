#include<iostream>
using namespace std;
int main(){
    
    int operation,a,b,addition,subtraction,multiplication,division;
    cout<<"enter a number"<<endl;
    cin>>operation;

    switch(operation){
        case 1:
         cout<<"enter two numbers"<<endl;
         cin>>a>>b;
         addition= a+b;
         cout<<"sum of a and b: "<<addition<<endl;
         cin>>addition;
         break;

        case 2:
         cout<<"enter two numbers"<<endl;
         cin>>a>>b;
         subtraction= a-b;
         cout<<"sub of a and b: "<<subtraction<<endl;
         cin>>subtraction;
         break;

        case 3:
         cout<<"enter two numbers"<<endl;
         cin>>a>>b;
         multiplication= a*b;
         cout<<"multiplication of a and b: "<<multiplication<<endl;
         cin>>multiplication;
         break;

        case 4:
         cout<<"enter two numbers"<<endl;
         cin>>a>>b;
         division= a/b;
         cout<<"division of a and b: "<<division<<endl;
         cin>>division;
         break;

        default:
         cout<<"ERROR!"<<endl;


    }
    return 0;
}