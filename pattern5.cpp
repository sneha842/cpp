#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter number: "<<endl;
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i<<" "; 
            /* 1
              22
              3333*/
            
            /*cout<<j<<" "
            1
            12
            123*/
        }
        cout<<endl;
    }
    return 0;
}