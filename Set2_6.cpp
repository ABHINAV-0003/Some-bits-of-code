#include<iostream>
#include<string>
using namespace std;
void
func (string word)
{
  int count = 0;
  int a = 1;
  for (int i = 0; i < (word.length ()); i++)
    {
      if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o'
	  || word[i] == 'u')
	{
	  count++;
	  if (count == 1)
	    {
	      a = i;
	    }
	}
      else
	if (((word[i] >= 65 && word[i] <= 90)
	     || (word[i] >= 97 && word[i] <= 122)) == false)
	{
	  count++;
	}

    }
  cout <<
    "The number of occurrence of vowels and non-alphabetic characters the sentence is "
    << count << endl;
  cout << "The First Vowel occurs at index position:- " << a;
}

int
main ()
{
  string word;
  cout << "Enter your Sentence:- ";
  getline (cin, word);
  func (word);
  return 0;
}
