#include<iostream.h>
#include<stdio.h>

int main()
{
  char string[20];
  tmpnam(string);                       //��������һ���ļ���Ψһ���ļ�
  cout<<"The created file's name is: "<<string<<endl;
  return 0;
}
