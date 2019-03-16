#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
  FILE *stream;
  char str[20];
  stream=fopen("temp.txt","r");         //以只读方式打开一个名叫temp.txt的文件
  fgets(str,20,stream);                  //从stream读取一个字符串
  cout<<str<<endl;
  fclose(stream);                 //关闭文件
  return 0;
}
