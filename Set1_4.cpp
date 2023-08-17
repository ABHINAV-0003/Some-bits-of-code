#include<iostream>
using namespace std;
int main (){
    int matrix[3][3],i,j;
  for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   cout<<"Enter the element at row and column (i,j)= "<<"("<<i+1<<","<<j+1<<") - ";
    cin>>matrix[i][j];
  }
  }

  cout<<"The given 3x3 matrix is \n";
   for (i = 0; i < 3; i++) {
    if (i > 0) {
      cout << "---|---|---\n";
    }
    for (j = 0; j < 3; j++) {
      if (j < 3 && j > 0) {
        cout << "|";
      }
      cout << " " << matrix[i][j] << " ";
    }
    cout <<"\n";
  }

return 0;
}
