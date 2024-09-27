#include<iostream>
using namespace std;
int main(){
  char choice;
  int a=10,b=67;
  cout<<"enter a choice"<<endl;
  cin>>choice;


  switch(choice){
    case '+':
     cout<<a+b;
     break;
    
    case '-':
     cout<<a-b;
     break;

     case '*':
     cout<<a*b;
     break;

     case '/':
     cout<<a/b;
     break;

     case '%':
     cout<<a%b;
     break;

     default:
     cout<<"ERROR!";

  }
  return 0;


}