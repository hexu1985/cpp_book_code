#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
  char str[20];
  printf("Please enter a string:");       //��ʾ����һ���ַ���
  gets(str);                       //��ȡһ���ַ���
  cout<<"The character you enter is:"<<str<<endl;   //��ʾ���ַ���
  int len;
  len=strlen(str);              //����str�ĳ���
  ungetch(str[len-1]);               //�����һ���ַ��˻�ȥ
  char ch;
  ch=getch();             //�Ӽ��̻������ж�ȡһ���ַ�
  cout<<"The last character is: "<<ch<<endl;
  return 0;
}
