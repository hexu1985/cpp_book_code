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
   char *str1="This is an example";
   char *str2="THIS IS NOT AN EXAMPLE";
   int sign,maxlen;
   maxlen=6;
   sign=strnicmp(str1,str2,maxlen);
   cout<<"When maxlen="<<maxlen<<": ";
   print(sign);
   maxlen=10;
   sign=strnicmp(str1,str2,maxlen);
   cout<<"When maxlen="<<maxlen<<": ";
   print(sign);
   return 0;
} 
