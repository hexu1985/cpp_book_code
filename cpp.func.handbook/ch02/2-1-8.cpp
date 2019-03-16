#include<iostream.h>
#include<ctype.h>

int main()
{
  char c1=' ';
  char c2=0x7F;
  if(isprint(c1)!=0)
	  cout<<c1<<" is the printable character!"<<endl;
  else
    cout<<c1<<" is not the printable character!"<<endl;
  if(isprint(c2)!=0)
	  cout<<c2<<" is the printable character!"<<endl;
  else
    cout<<c2<<" is not the printable character!"<<endl;
  return 0;
}
