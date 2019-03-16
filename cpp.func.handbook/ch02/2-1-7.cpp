#include<iostream.h>
#include<ctype.h>

int main()
{
  char c1='a';
  char c2='A';
  if(islower(c1)!=0)
	  cout<<c1<<" is the lowercase letter!"<<endl;
  else
      cout<<c1<<" is not the lowercase letter!"<<endl;
  if(islower(c2)!=0)
	  cout<<c2<<" is the lowercase letter!"<<endl;
  else
    cout<<c2<<" is not the lowercase letter!"<<endl;
  return 0;
}
