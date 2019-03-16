#include<iostream.h>
#include<string.h>

int main()
{
   char string[40];
   char c='a';
   int n=10;
   char *ptr;
   ptr=(char *)memset(string,c,n);
   string[n]='\0';
   cout<<"After memset The string is:"<<ptr<<endl;
   return 0;
}
