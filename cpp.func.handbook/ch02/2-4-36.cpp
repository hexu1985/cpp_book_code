#include<iostream.h>
#include<string.h>

int main()
{
   char str1[20]="abcdef,ghi.abcdefgh";
   char str2[20]=",d.";
   char *result;
   cout<<"The words in str1 are listed below:"<<endl;
   result=strtok(str1,str2);
   while(result)
   {
	   cout<<result<<endl;
	   result=strtok(NULL,str2);
   }
   return 0;
}
