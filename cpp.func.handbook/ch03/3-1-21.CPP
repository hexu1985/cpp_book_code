#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
  FILE *stream;
  char str[20]="This is a test";
  char s;
  stream=fopen("temp.txt","a");
  fwrite(str,strlen(str),1,stream);
  if(fflush(stream)==0)
	  cout<<"The stream had flushed success!"<<endl;
  else
	  cout<<"The stream had flushed fail!"<<endl;
  return 0;
}
