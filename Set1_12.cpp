#include<iostream>
using namespace std;
int main (){
 int num,q,r,k,sum;
 cout<<"Enter the 6 digit number:- ";
 cin>>num;
 sum=0;
 for(k=0;num!=0;num/10){
    r=num%10;
    k=r+10*k;
    num=num/10;
    sum=sum+r;
 }
 cout<<"The reversed  number is "<<k<<" and sum of the digits is "<<sum;

return 0;
}



