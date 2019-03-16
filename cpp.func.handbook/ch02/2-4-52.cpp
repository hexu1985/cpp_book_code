#include<iostream.h>
#include<string.h>

int main()
{
   char string[20]="This is an example";
   int len;
   len=_fstrlen(string);
   string[len]='.';
   string[len+1]='\0';
   cout<<string<<endl;
   return 0;
}   
