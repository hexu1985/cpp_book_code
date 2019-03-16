#include<iostream.h>
#include<ctype.h>

int main()
{
  char c1='.';
  char c2='a';
  if(ispunct(c1)!=0)
	  cout<<c1<<" is the punctuation character!"<<endl;
  else
    cout<<c1<<" is not the punctuation character!"<<endl;
  if(ispunct(c2)!=0)
	  cout<<c2<<" is the punctuation character!"<<endl;
  else
    cout<<c2<<" is not the punctuation character!"<<endl;
  return 0;
}
