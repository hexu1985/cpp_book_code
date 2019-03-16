#include<iostream.h>
#include<stdio.h>

int main()
{
  char buffer[100];
  FILE *stream;
  stream=fopen("temp.txt","r");
  long offset;
  int whence;
  offset=2;
  whence=0;
  if(fseek(stream,offset,whence)==0)
  {
      fgets(buffer,10,stream);
	  cout<<"After "<<offset<<" bit The content is:"<<buffer<<endl;
  }
  return 0;
}
