                                                               // SHREE //
#include<iostream>
using namespace std;

int main()
  {
  //Inputs the size of pattern i.e Number of Rows...
  int n;
  cout<<"Enter Size:- ";
  cin>>n;

    char ch;

  //i->row no.
  //j->column no.
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      // ASCII of 'A' -> 65
      ch=65+i+j-2;
      cout<<ch<<"  ";
    }
    cout<<endl;
}

  return 0;
}