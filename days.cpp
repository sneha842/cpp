#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter a number"<<endl;
    cin>>day;

    switch (day){
     case 1:
      cout<<"Monday"<<endl;
      break;

      case 2:
      cout<<"Tuesday"<<endl;
      break;

      case 3:
     cout<<"Wednesday"<<endl;
     break;

     case 4:
     cout<<"Thursdday"<<endl;
     break;

     case 5:
     cout<<"Friday"<<endl;
     break;
     case 6:
     cout<<"Saturday"<<endl;
     break;

     case 7:
     cout<<"Sunday"<<endl;
     break;
    default:
     cout<<"ERROR!"<<endl;
    }
    return 0;

     
}