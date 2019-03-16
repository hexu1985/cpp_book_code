#include<iostream.h>
#include<string.h>

int main()
{
   char string[40];
   char c='+';
   int n=10;
   char *s;
   s=strnset(string,c,n);
   s[n]='\0';
   cout<<"After memset The string is:"<<s<<endl;
   return 0;
}
