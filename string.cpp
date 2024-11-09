#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstname="sneha";
    string lastname,fullname;
    cout<<"enter last name"<<endl;
    cin>>lastname;
    fullname=firstname.append(lastname);
    cout<<fullname<<endl;
    return 0;

    
}