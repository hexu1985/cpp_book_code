#include<iostream.h>
#include<stdlib.h>

int main()
{
  char string[40];
  int n=3,num;
  const wchar_t pwcs[3]={88,89,90};
  num=wcstombs(string,pwcs,n);
  if(num!=(size_t)-1)
  {
	  cout<<"There are "<<num<<" bits will be converted"<<endl;
	  string[num]='\0';
    cout<<"The result is:"<<string<<endl;
  }
  else
  {
	  cout<<"Invalid character!";
  }
  return 0;
}
