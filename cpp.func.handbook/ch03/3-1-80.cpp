#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
  char str[20];
  printf("Please enter a string:");
  gets(str);
  cout<<"The character you enter is:"<<str<<endl;
  int len;
  len=strlen(str);
  ungetc(str[len-1],stdin);
  char ch;
  ch=getc(stdin);
  cout<<"The last character is: "<<ch<<endl;
  return 0;
}
