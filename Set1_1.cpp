#include<iostream>
using namespace std;
int fact(int n){
  int k;
if(n==0){
  return 1;
}
else{
  k=n*fact(n-1);
}
return k;
}
double power(int x,int n){
 
 double l=0;
 int m=2*n-1;
  for(int i=0;i<m;i=i+2){
    int num=1;
    for(int j=0;j<=i;j++){ 
      if((j)%2==0){
        num=num*x;
  }
  else{
    num=num*-x;
  }
    }
  l=(l+num)/fact(i);
  }
return l;
}
int main(){   
  while(1){ 
  int x,n;
   cout<<"Enter value of x:- "<<endl;
   cin>>x; 
   cout<<"Enter the value of n:- "<<endl;
   cin>>n;
cout<<power(x,n);
  return 0;

}

}