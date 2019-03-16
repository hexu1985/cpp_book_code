#include<iostream.h>
#include<ctype.h>

int main()
{
  char c1='A';
  char c2=0x7F;
  if(iscntrl(c1)!=0)
	  cout<<c1<<" is a delete character or ordinary character!"<<endl;
  else
    cout<<c1<<" is not a delete character nor ordinary character!"<<endl;
  if(iscntrl(c2)!=0)
	  cout<<c2<<" is a delete character or ordinary character!"<<endl;
  else
    cout<<c2<<" is not a delete character nor ordinary character!"<<endl;
  return 0;
}
