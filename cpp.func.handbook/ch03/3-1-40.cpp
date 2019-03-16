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
  stream=fopen("temp.txt","r");  //以读的方式打开temp.txt文件
  ch=fgetc(stream);
  position=ftell(stream);
  cout<<"The file pointer's position is:"<<position<<endl;
  fclose(stream);               //关闭文件
  return 0;
}
