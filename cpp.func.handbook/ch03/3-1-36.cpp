#include<iostream.h>
#include<stdio.h>

int main()
{
  char buffer[100];
  FILE *stream;
  stream=fopen("temp.txt","r");
  int num;
  num=fscanf(stream,"%s",buffer);                      //¶ÁÈëÆÁÄ»µÄ×Ö·û
  if(num!=EOF)
	  if(num>0)
	  {
		  cout<<"There "<<num<<" insert areas are read"<<endl;
		  cout<<"The buffer contents are: "<<buffer<<endl;
	  }
	  else
		  cout<<"There no insert area is read"<<endl;
  else
	  cout<<"Its reach the end of the file"<<endl; 
  return 0;
}
