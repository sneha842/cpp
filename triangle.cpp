#include<iostream>
using namespace std;
int main(){
    int sidea,sideb,sidec;
    cout<<"enter a sides"<<endl;
    cin>>sidea>>sideb>>sidec;

    if(sidea==sideb && sideb==sidec){
        cout<<"it's an equilateral triangle"<<endl;
    }
    else if (sidea==sideb || sideb==sidec || sidea==sidec){
        cout<<"it's an isoceles triangle"<<endl;
    }
    else{
        cout<<"it's a scalene triangle"<<endl;
    }
    return 0;
}