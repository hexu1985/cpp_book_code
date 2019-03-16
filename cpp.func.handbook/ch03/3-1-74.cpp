#include<iostream.h>
#include<stdio.h>

int main()
{
  char buffer[100];
  char *str="This is a test";
  sscanf(str,"%s",buffer);                //从str读入一个字符串
  cout<<"The buffer is: "<<buffer<<endl;   //显示读取的字符串
  return 0;
}
