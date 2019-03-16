#include<iostream.h>
#include<ctype.h>

int main()
{
  char c1='\n';
  char c2='A';
  if(isspace(c1)!=0)
	  cout<<c1<<" is the whitespace character!"<<endl; 
  else
      cout<<c1<<" is not the whitespace character!"<<endl;  
  if(isspace(c2)!=0)
	  cout<<c2<<" is the whitespace character!"<<endl;
  else
      cout<<c2<<" is not the whitespace character!"<<endl;
  return 0;
}
