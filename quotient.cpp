#include<iostream>
using namespace std;
int main(){
    int remainder,quotient,dividend,divisor;
    cout<<"Enter a number"<<endl;
    cin>>dividend>>divisor;

    quotient= dividend/divisor;
    remainder=quotient%divisor;
    
    cout<<"quotient is"<<quotient<<endl;
    cout<<"remainder is"<<remainder<<endl;
    return 0;
}