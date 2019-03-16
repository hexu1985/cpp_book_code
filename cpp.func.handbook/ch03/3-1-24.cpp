#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
  FILE *stream;
  fpos_t pos;
  stream=fopen("temp.txt","r");
  int flag;
  flag=fgetpos(stream,&pos);
  if(flag==0)
  {
	  printf("The pos is:"); 
      printf("%ld\n",pos);
  }
  else
	  cout<<"Some error occur!"<<endl; 
  fclose(stream);
  return 0;
}
