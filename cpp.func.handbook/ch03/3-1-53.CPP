#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<sys\stat.h>
#include<share.h>

int main()
{
  int handle;
  handle=open("temp.txt",O_RDONLY);
  int len;
  len=filelength(handle);
  clrscr();
  if(lock(handle,0,len))
	  cout<<"Lock the file success!"<<endl;
  else
	  cout<<"Lock fail!"<<endl;
  unlock(handle,0,len);
  return 0;
}
