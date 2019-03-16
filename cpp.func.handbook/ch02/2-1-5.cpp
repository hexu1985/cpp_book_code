#include<iostream.h>
#include<ctype.h>

int main()
{
  char c1='A';
  char c2='1';
  if(isdigit(c1)!=0)
	  cout<<c1<<" is the valid digit!"<<endl;
  else
    cout<<c1<<" is not the valid digit!"<<endl;
  if(isdigit(c2)!=0)
	  cout<<c2<<" is the valid digit!"<<endl;
  else
    cout<<c2<<" is not the valid digit!"<<endl;
  return 0;
}
