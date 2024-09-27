#include<iostream>
using namespace std;

int main(){
   int sum,sidea,sideb,sidec;
   cout<<"enter sides"<<endl;
   cin>>sidea;
   cin>>sideb;
   cin>>sidec;
   sum=sidea+sideb+sidec;
   if (sum==180){
   cout<<"it's a triangle";
   }
   else{
    cout<<"it's not a triangle";
   }
   return 0;
   

}