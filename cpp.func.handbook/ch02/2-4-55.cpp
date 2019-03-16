#include<iostream.h>
#include<string.h>

void print(int sign)
{
   if(sign>0)
	   cout<<"str1 > str2 "<<endl;
   if(sign==0)
	   cout<<"str1 = str2"<<endl;
   if(sign<0)
	   cout<<"str1 < str2"<<endl;
}

int main()
{
   char far *str1="This is an example";
   char far *str2="This is not an example";
   int sign,maxlen;
   maxlen=6;
   sign=_fstrncmp(str1,str2,maxlen);
   cout<<"When maxlen="<<maxlen<<": ";
   print(sign);
   maxlen=10;
   sign=_fstrncmp(str1,str2,maxlen);
   cout<<"When maxlen="<<maxlen<<": ";
   print(sign);
   return 1;
} 
