#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
  FILE *stream;
  int ch;
  stream=fopen("temp.txt","r");         //��ֻ����ʽ��һ������temp.txt���ļ�
  ch=fgetc(stream);
  while(ch!=EOF)
  {
	  cout<<(ch-'1'+1);
	  ch=fgetc(stream);
  }
  fclose(stream);
  return 0;
}
