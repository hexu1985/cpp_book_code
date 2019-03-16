#include<iostream.h>
#include<string.h>

int main()
{
   char *string="This is a test";
   char ch='s';
   char *str3;
   str3=strrchr(string,ch);
   cout<<"The last position is:"<<(str3-string)<<endl;
   return 0;
}
