#include<iostream.h>
#include<string.h>
     
int main()
{
   char *str1="This is a test";
   char *str2="at";
   char *str3;
   str3=strpbrk(str1,str2);
   cout<<"The first letter is: "<<str3[0]<<endl;
   cout<<"Its position is: "<<(str3-str1)<<endl;
   return 0;
}
