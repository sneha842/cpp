#include<iostream>
using namespace std;

int main(){
    float phy,chem,bio,maths,comp,total,percentage;
    cout<<"Enter marks of phy"<<endl;
    cin>>phy;
    cout<<"enter marks of chem"<<endl;
    cin>>chem;
    cout<<"enter marks of bio"<<endl;
    cin>>bio;
    cout<<"enter marks of maths"<<endl;
    cin>>maths;
    cout<<"enter marks of comp"<<endl;
    cin>>comp;
    total= phy+chem+bio+maths+comp;
    percentage=(total/500)*100;
    char grade;
    if(percentage>=90)
        cout<<"grade A"<<endl;
    else if(percentage>=80)
        cout<<"grade B"<<endl;
    else if(percentage>=70)
        cout<<"grade c"<<endl;
    else if(percentage>=60)
        cout<<"grade d"<<endl;
    else if(percentage>50)
        cout<<"grade E"<<endl;
    else if(percentage>40)
        cout<<"grade F"<<endl;
    else
        cout<<"FAIL"<<endl;

    cout<<"total marks"<<total<<endl;
    cout<<"percentage"<<percentage<<endl;
return 0;
}