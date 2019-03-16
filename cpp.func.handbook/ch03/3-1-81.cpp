#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
  char str[20];
  printf("Please enter a string:");       //提示输入一个字符串
  gets(str);                       //读取一个字符串
  cout<<"The character you enter is:"<<str<<endl;   //显示该字符串
  int len;
  len=strlen(str);              //计算str的长度
  ungetch(str[len-1]);               //将最后一个字符退回去
  char ch;
  ch=getch();             //从键盘缓冲区中读取一个字符
  cout<<"The last character is: "<<ch<<endl;
  return 0;
}
