#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;

    if (age>=18){
        cout<<"elegible to vote"<<endl;
    }
    else{
        cout<<"you are not elegible to vote wait till 18"<<endl;
    }
    return 0;
}