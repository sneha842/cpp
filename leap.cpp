#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a year"<<endl;
    cin>>a;

    if(a %4==0){
        cout<<"it's a leap year"<<endl;
        cin>>a;
    }
    else{
        cout<<"it's not a leap year"<<endl;
    }
    return 0;
}