#include<iostream.h>
#include<io.h>
#include<string.h>

int main()
{
  int handle,newhandle;
  char str[20];
  handle=open("dup1.txt",0);
  newhandle=open("dup2.txt",0);
  cout<<"Before dup2,The handle and newhandle are: "<<handle<<" "<<newhandle<<endl;
  dup2(handle,newhandle);
  cout<<"After dup2,The handle and newhandle are: "<<handle<<" "<<newhandle<<endl;
  int len;
  len=read(newhandle,str,20);
  str[len]='\0';
  cout<<"The string in dup1.txt is:"<<str<<endl;
  close(handle);
  return 0;
}
