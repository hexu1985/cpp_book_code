#include<iostream.h>
#include<string.h>

int main()
{
   char *str1="This is an example";
   char *str2="ai";
   int n,i;
   n=strcspn(str1,str2);
   for(i=0;i<n;i++)cout<<str1[i];
   return 0;
}
