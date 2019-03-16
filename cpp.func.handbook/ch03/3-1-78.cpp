#include<iostream.h>
#include<stdio.h>

int main()
{
  FILE *fp;
  fp=tmpfile();
  if(fp)
	  cout<<"A temporary file created"<<endl;
  else
	  cout<<"Fail to creat a temporary file"<<endl;
  return 0;
}
