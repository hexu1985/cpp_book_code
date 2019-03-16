#include<iostream.h>
#include<string.h>

int main()
{
   char str1[20]="abcdefghiabcdefgh";
   char str2[20]="def";
   char *s;
   int n=0;
   cout<<"The str2 is found in position:"; 
   s=strstr(str1,str2);
   while(s)
   {
	   cout<<s-str1<<" ";
	   s=s+strlen(str2);
	   s=strstr(s,str2);
   }
   return 0;
}
