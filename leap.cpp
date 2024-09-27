#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter a year"<<endl;
    cin>>x;

    if(x %4==0){
        cout<<"it's a leap year"<<endl;
        cin>>x;
    }
    else{
        cout<<"it's not a leap year"<<endl;
    }
    return 0;
}