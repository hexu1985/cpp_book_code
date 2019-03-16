#include<iostream.h>
#include<stdio.h>

int main()
{
  char string[20];
  tmpnam(string);                       //创建并打开一个文件名唯一的文件
  cout<<"The created file's name is: "<<string<<endl;
  return 0;
}
