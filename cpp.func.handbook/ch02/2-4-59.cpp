#include<iostream.h>
#include<string.h>
     
int main()
{
   char far *str1="This is a test";
   char far *str2="at";
   char far *str3;
   str3=_fstrpbrk(str1,str2);
   cout<<"The first letter is: "<<str3[0]<<endl;
   cout<<"Its position is: "<<(str3-str1)<<endl;
   return 1;
}
