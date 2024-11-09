#include<iostream>
using namespace std;
int main(){
    int num1,num2,max,min;
    cout<<"enter two numbers"<<endl;
    cin>>num1>>num2;

    if(num1>num2){
        max=num1;
        min=num2;
    }
    else{
        max=num2;
        min=num1;
    }
    
    cout<<"MAX="<<max<<endl;
    cout<<"MIN="<<min<<endl;
    return 0;

}