#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
  char *str="This is an example of setbuf";
  char buf[100];
  FILE *stream;
  stream=fopen("temp2.txt","w");
  setbuf(stream,buf);
  fputs(str,stream);
  cout<<"The buf's content is: ";
  buf[strlen(str)]='\0';
  cout<<buf<<endl;
  fclose(stream);
  return 0;
}
