#include<iostream.h>
#include<stdlib.h>

int main()
{
  char string[40];
  wchar_t pwcs=65;
  int num;
  num=wctomb(string,pwcs);
  cout<<"There are "<<num<<" will be converted"<<endl;
  string[num]='\0';
  cout<<"Its result is: "<<string<<endl;
  return 0;
}
