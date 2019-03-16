#include<iostream.h>
#include<string.h>

int main()
{
   char far *str1="This is an example";
   char far *str2="THIS IS AN EXAMPLE";
   int sign;
   sign=_fstricmp(str1,str2);
   if(sign>0)
	   cout<<"str1 > str2 "<<endl;
   if(sign==0)
	   cout<<"str1 = str2"<<endl;
   if(sign<0)
	   cout<<"str1 < str2"<<endl;
   return 0;
}
