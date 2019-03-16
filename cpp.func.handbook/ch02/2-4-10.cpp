#include<iostream.h>
#include<string.h>

int main()
{
   char dest[40];
   char c='+';
   int length=10;
   setmem(dest,length,c);
   dest[length]='\0';
   cout<<"After setmem The string is:"<<dest<<endl;
   return 0;
}
