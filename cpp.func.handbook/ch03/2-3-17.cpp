#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
   FILE *fp;
   char str[20];
   int handle;
   handle=open("temp.txt",0);        //打开temp.txt文件
   fp=fdopen(handle,"rt");
   if(fp)
   {
	   cout<<"fdopen success!"<<endl;
       fclose(fp)
   }
   else
	   cout<<"fdopen fail!"<<endl;
   return 0;
}
