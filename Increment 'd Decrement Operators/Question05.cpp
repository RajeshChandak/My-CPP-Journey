// Guess The Output...

#include <iostream>
using namespace std;

int main()
{
  int a = 1;
  int b = 2;
  if (a-- > 0 || ++b > 2)
  {
    cout << "Stage1 - Inside iF ";
  }
  else
  {
    cout << "Stage2 - Inside else";
  }
  cout << a << " " << b << endl;
  return 0;
}

// Expected Output:- Stage1 - Inside iF 0 2