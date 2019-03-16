#include<iostream.h>
#include<string.h>

int main()
{
   char *str1="This is an example";
   char *str2;
   str2=strdup(str1);
   cout<<str2<<endl;
   delete(str2);
   return 0;
} 
