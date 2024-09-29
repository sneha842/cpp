#include <iostream>
using namespace std;
int main(){
    int i,j,rows,col;
    cout<<"enter number of rows"<<endl;
    cin>>rows;
    cout<<"enter number of columns"<<endl;
    cin>>col;
    

    for(i=rows;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
    cout<<endl;
       
    }
    return 0;


}