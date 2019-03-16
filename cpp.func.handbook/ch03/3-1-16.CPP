#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
   FILE *fp;
   char str[20];
   fp=fopen("temp.txt","r");        //打开temp.txt文件
   fgets(str,10,fp);
   cout<<str;
   fclose(fp);
   return 0;
}
