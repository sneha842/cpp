#include<iostream>
using namespace std;
int main(){
    int i,num;
    cout<<"enter a number"<<endl;
    cin>>num;

    for(i=1;i<=20;i++){
        cout<<num<<'*'<<i<<'='<<num*i<<endl;
    }
    return 0;
}
