#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  FILE *stream;
  char ch;
  long position;
  stream=fopen("temp.txt","r");  //�Զ��ķ�ʽ��temp.txt�ļ�
  ch=fgetc(stream);
  position=ftell(stream);
  cout<<"The file pointer's position is:"<<position<<endl;
  fclose(stream);               //�ر��ļ�
  return 0;
}
