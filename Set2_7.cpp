#include<iostream>
#include<string>
using namespace std;
void
func (string word)
{
  string n = "";
  n = n + word[0];
  for (int i = 0; i < word.length () - 1; i++)
    {

      if (abs ((n[n.length () - 1]) - word[i + 1]) == 32)
	{
	  continue;
	}
      else if (n[n.length () - 1] != word[i + 1])
	{
	  n = n + word[i + 1];
	}


    }
  cout << "The modified string is " << n;
}

int
main ()
{
  string word = "";
  cout << "Enter the String" << endl;
  getline (cin, word);
  func (word);
  return 0;
}


