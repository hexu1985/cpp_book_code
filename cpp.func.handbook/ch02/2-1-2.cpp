#include<iostream.h>
#include<ctype.h>

int main()
{
  char c1='1';
  char c2='A';
  if(isalpha(c1)!=0)
	  cout<<c1<<" is a alphebet!"<<endl;
  else
    cout<<c1<<" is not a alphebet!"<<endl;
  if(isalpha(c2)!=0)
	  cout<<c2<<" is a alphebet!"<<endl;
  else
    cout<<c2<<" is not a alphebet!"<<endl;
  return 0;
}
