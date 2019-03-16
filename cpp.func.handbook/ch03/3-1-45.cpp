#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
  char ch;
  printf("Please insert a character:");
  ch=getche();                //从键盘中读取一个字符
  cout<<endl<<"What you insert is: "<<ch<<endl;  //显示该字符
  return 0;
}
