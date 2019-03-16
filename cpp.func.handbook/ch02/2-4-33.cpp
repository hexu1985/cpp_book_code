#include<iostream.h>
#include<string.h>

int main()
{
   char string[20]="This is a test";
   char ch='+';
   int n,i;
   n=strlen(string);
   strset(string,ch);
   cout<<string;
   return 0;
}
