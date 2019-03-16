#include<iostream.h>
#include<ctype.h>

int main()
{
  char c1='a';
  char c2='g';
  if(isxdigit(c1)!=0)
	  cout<<c1<<" is the hexadecimal character!"<<endl;
  else
      cout<<c1<<" is not the hexadecimal character!"<<endl;
  if(isxdigit(c2)!=0)
	  cout<<c2<<" is the hexadecimal character!"<<endl;
  else
      cout<<c2<<" is not the hexadecimal character!"<<endl;
  return 0;
}
