#include<iostream>
using namespace std;
void bubbleSort(int arr[6] )
{
    for(int i=1;i<6;i++){
        bool swapped=false;
for(int j=0;j<(6-i);j++){
    if(arr[j]<arr[j+1]){
        int x=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=x;
        swapped=true;
    }

    }
      if (swapped==false){
        break;
}

    }
}

void inttoarray(int n,int arr[6]){

    for(int i=5;i>=0;i--){
        arr[i]=n%10;
        n=n/10;
    }

}
void arrayx(int array1[6],int array2[6]){
    for(int i=0;i<=5;i++){
        array1[i]=array2[i];
    }
}
int arrtonum(int arr[6]){
    int num=arr[0]*100000+arr[1]*10000+arr[2]*1000+arr[3]*100+arr[4]*10+arr[5];
    return num;
}
int largest(int b,int bb,int bbb){
    if(b>bb){
        if(b>bbb){
                return b;

        }
        else{
            return bbb;
        }
    }
    else{
        if(bb>bbb){
            return bb;
        }
        else{
            return bbb;
        }
    }
}
int main(){
int n1,n2,n3;
int arr[6]={};
int arr1[6]={};
int arr2[6]={};
int arr3[6]={};
cout<<"Enter number 1:- ";
cin>>n1;
inttoarray(n1,arr);
arrayx(arr1,arr);
cout<<endl<<"Enter number 2:- ";
cin>>n2;
inttoarray(n2,arr);
arrayx(arr2,arr);
cout<<endl<<"Enter number 3:- ";
cin>>n3;
inttoarray(n3,arr);
arrayx(arr3,arr);
bubbleSort(arr1);
bubbleSort(arr2);
bubbleSort(arr3);
int a1=arrtonum(arr1);
int a2=arrtonum(arr2);
int a3=arrtonum(arr3);
cout<<"The modified numbers according to decreasing order of digits are"<<endl<<arrtonum(arr1)<<endl<<arrtonum(arr2)<<endl<<arrtonum(arr3)<<endl;
cout<<"The largest three digit number is:- "<<largest(a1,a2,a3);
return 0;
}
