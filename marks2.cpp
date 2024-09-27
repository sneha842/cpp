#include<iostream>
using namespace std;
int main(){
    int sub1,sub2,sub3,sub4,sub5,total,percentage;
    cout<<"marks of sub1"<<endl;
    cin>>sub1;
    cout<<"marks of sub2"<<endl;
    cin>>sub2;
    cout<<"marks of sub3"<<endl;
    cin>>sub3;
    cout<<"marks of sub4"<<endl;
    cin>>sub4;
    cout<<"marks of sub 5"<<endl;
    cin>>sub5;
    percentage=(total/500)*100;
    total= sub1+sub2+sub3+sub4+sub5;

    char grade;
    if(percentage>=81 && percentage<=100){
        cout<<"Grade A"<<endl;
    }
    else if(percentage>=71 && percentage<=80){
        cout<<"Grade B"<<endl;
    }
    else if(percentage>=61&& percentage<=70){
        cout<<"Grade C"<<endl;
    }
    else if(percentage>=40 && percentage<=60){
        cout<<"Grade D"<<endl;
    }
    else{
        cout<<"Grade E"<<endl;
    }
return 0;
}