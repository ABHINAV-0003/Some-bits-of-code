#include<iostream>
using namespace std;
int fibo(int num){
int i=2;
int a=0;
int b=1;
int k;
if(num==1){
    return 1;
}
else if(num==0){
    return 0;
}
else {
    return fibo(num-2)+fibo(num-1);
}
}
long long int factorial(int num){
   if (num==0){
       return 1;
   }
   else {
   return num*factorial(num-1);
   }
}

int main (){
int n,num;
num=1;
cin>>n;

cout<<"Number"<<"("<<n<<")"<<" Factorial" <<"("<<n<<"!"<<")"<<endl;

while(num<=n){
    int f1=fibo(num);
    long long int f2=factorial(f1);
    cout<<f1<<"          "<<f2;
    cout<<endl;
num++;
}

return 0;
}
