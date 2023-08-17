#include<iostream>
using namespace std;
void
calc (int n, int arr[], int a)
{
  long double sum = 0;
  long double diff = arr[0];
  long double prod = 1;
  long double div = arr[0];
  int f = 0;
  if (a == 1)
    {
      for (int b = 0; b < n; b++)
	{
	  sum = sum + arr[b];

	}
      cout << "Sum=" << sum;
    }
  else if (a == 2)
    {
      for (int b = 1; b < n; b++)
	{

	  diff = diff - arr[b];

	}
      cout << "Difference=" << diff;
    }
  else if (a == 3)
    {

      for (int b = 0; b < n; b++)
	{
	  prod = prod * arr[b];

	}
      cout << "Product=" << prod;
    }
  else if (a == 4)
    {
      for (int b = 1; b < n; b++)
	{
	  if (arr[b] != 0)
	    {
	      div = div / arr[b];
	    }
	  else
	    {
	      cout << "Division by zero is not defined ";
	      int f = 1;

	      break;
	    }

	}
      if (f == 0)
	{
	  cout << "Quotient=" << div;
	}
    }
}

int
main ()
{
  int n, a;
  cout << "Enter the number of operands:- ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cout << "Enter the numbers:-" << endl;
      cin >> arr[i];
    }
  cout <<
    "Specify the Mathematical Operation \nAddition(1)\nSubtraction(2)\nMultiplication(3)\nDivision(4):-"
    << endl;
  cin >> a;
  calc (n, arr, a);
  return 0;

}

