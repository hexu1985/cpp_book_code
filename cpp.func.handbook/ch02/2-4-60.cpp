#include<iostream.h>
#include<string.h>

int main()
{
   char far *string="This is a test";
   char ch='s';
   char far *str3;
   str3=_fstrrchr(string,ch);
   cout<<"The last position is:"<<(str3-string)<<endl;
   return 1;
}
