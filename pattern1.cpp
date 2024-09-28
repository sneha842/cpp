#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"enter number of row"<<endl;
    cin>>row;
    cout<<"enter number of col"<<endl;
    cin>>col;

    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}