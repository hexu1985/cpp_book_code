#include<iostream.h>
#include<ctype.h>

int main()
{
  char c1='+';
  char c2='A';
  if(isalnum(c1)!=0)
	  cout<<c1<<" is a alphebet or ASCII number!"<<endl;  
  else
    cout<<c1<<" is not a alphebet nor ASCII number!"<<endl;
  if(isalnum(c2)!=0)
	  cout<<c2<<" is a alphebet or ASCII number!"<<endl;
  else
    cout<<c2<<" is not a alphebet nor ASCII number!"<<endl;
  return 0;
}
