#include<iostream.h>
#include<io.h>
#include<string.h>

int main()
{
  int handle,newhandle;
  char str[20];
  handle=open("dup.txt",0);
  newhandle=dup(handle);
  cout<<"The old handle is: "<<handle<<endl;
  cout<<"The new handle is: "<<newhandle<<endl;
  int len;
  len=read(newhandle,str,20);
  str[len]='\0';
  cout<<"The string in dup.txt is:"<<str<<endl;
  close(handle);
  return 0;
}
