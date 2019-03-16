#include<iostream.h>
#include<stdio.h>

int main()
{
   FILE *fp;
   char ch;
   fp=fopen("clearerr.txt","w");   
   ch=fgetc(fp);               
   if(ferror(fp))              
   {
	  cout<<"Error when reading"<<endl;
	  cout<<"Now resetting the error indicator"<<endl;
	  clearerr(fp);             
   }
   else
   {
	   cout<<"Success to read"<<endl;
   }
   return 0;
}
