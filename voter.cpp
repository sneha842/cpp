#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<"enter age: "<<endl;
    cin>>age;

   bool citizenship;
    cout<<"He/She have India's citizenship (1 for Yes, 0 for NO):"<<endl;
    cin>>citizenship;

    bool voteridcard;
    cout<<"He/ She have voter Id (1 for Yes, 0 for NO): "<<endl;
    cin>>voteridcard;

    if(age>=18){
        if(citizenship){
            if(voteridcard){
                cout<<"You are eligible to vote"<<endl;
            }
            else{
                cout<<"you are not eligible to vote"<<endl;
            }
        }
        else{
            cout<<"You are not eligible to vote"<<endl;
        }
    }
    else{
        cout<<"You are not not eligible to vote"<<endl;
    }
    return 0;
    
    
}