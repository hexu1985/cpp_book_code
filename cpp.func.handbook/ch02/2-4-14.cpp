#include<iostream.h>
#include<string.h>

int main()
{
   char *str1="This is an example";
   char *str2="This is not an example";
   int sign;
   sign=strcmp(str1,str2);
   if(sign>0)
	   cout<<"str1 > str2 "<<endl;
   if(sign==0)
	   cout<<"str1 = str2"<<endl;
   if(sign<0)
	   cout<<"str1 < str2"<<endl;
   return 0;
}
