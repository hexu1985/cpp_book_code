#include<iostream.h>
#include<string.h>

int main()
{
   char str1[20]="abcdefghi";
   char str2[20]="+-*/abc12";
   int len,i;
   len=strspn(str1,str2);
   cout<<"Its length is: "<<len<<endl;
   cout<<"Its content is:";
   for(i=0;i<len;i++)cout<<str1[i];
   return 0;
}
