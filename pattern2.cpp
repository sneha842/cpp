#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"enter number of rows"<<endl;
    cin>>row;
    cout<<"enter number of col"<<endl;
    cin>>col;
    
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i==1 || i==row){
                cout<<"*";
            }
            else if(j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
        
    }
    return 0;
}