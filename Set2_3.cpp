#include<iostream>
using namespace std;
int
main ()
{
  int i, j, k;
  int n;
  cin >> n;
  i = 1;
  while (i <= n)
    {
      j = 1;
      int s = n - i;
      while (s)
	{
	  cout << " ";
	  s--;
	}
      while (j <= i)
	{
	  cout << i - j;
	  j++;
	}
      int m = i - 1;
      while (m)
	{
	  cout << i - m;
	  m--;
	}
      i++;
      cout << endl;
    }


  return 0;
}


