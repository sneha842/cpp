#include<iostream>
using namespace std;

int main(){
    int i,count=0;
    
    for(i=1; i<=10; i++){

        if(i%2==0){
          count++;
        }
    }
    cout<<count<<endl;
    return 0;


}