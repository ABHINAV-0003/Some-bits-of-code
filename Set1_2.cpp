#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"Enter the Maximum Mark:-"<<endl;
cin>>n;
cout<<"Enter your mark:-"<<endl;
cin>>m;
int k=n/7;
switch(m/k){
case(0):
cout<<"F grade";
break;
case(1):
cout<<"E grade";
break;
case(2):
cout<<"D grade";
break;
case(3):
cout<<"C grade";
break;
case(4):
cout<<"B grade";
break;
case(5):
cout<<"A grade";
break;
case(6):
cout<<"S grade";
break;
default:
cout<<"Invalid Mark";
}
return 0;
}


