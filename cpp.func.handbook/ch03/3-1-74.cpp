#include<iostream.h>
#include<stdio.h>

int main()
{
  char buffer[100];
  char *str="This is a test";
  sscanf(str,"%s",buffer);                //��str����һ���ַ���
  cout<<"The buffer is: "<<buffer<<endl;   //��ʾ��ȡ���ַ���
  return 0;
}
