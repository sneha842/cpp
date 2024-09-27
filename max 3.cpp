#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 3 numbers"<<endl;
    cin>>a>>b>>c;
     if(a>b){
        if(a>c){
            cout<<"a is greater"<<endl;
            cin>>a;
        }
        else{
            cout<<"c is greater"<<endl;
            cin>>c;
        }
     }
     else{
        cout<<"b is graetaer"<<endl;
        cin>>b;
     }
     return 0;
}