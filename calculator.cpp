#include<iostream>
using namespace std;
int main(){
  char choice;
  int a,b;
  cout<<"enter two number"<<endl;
  cin>>a>>b;
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