#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
  FILE *stream;
  int ch;
  stream=fopen("temp.txt","r");         //以只读方式打开一个名叫temp.txt的文件
  ch=fgetc(stream);
  while(ch!=EOF)
  {
	  cout<<(ch-'1'+1);
	  ch=fgetc(stream);
  }
  fclose(stream);
  return 0;
}
