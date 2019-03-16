#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
  char *str="This is an example of setbuf";
  char buf[100];
  size_t size;
  size=20;
  FILE *stream;
  stream=fopen("temp2.txt","w");       //以只读的方式打开文件temp2.txt  
  setvbuf(stream,buf,_IOFBF,size);                 //设置stream的缓冲区为buf,
  fputs(str,stream);                 //把字符串str写到文件中去
  cout<<"The buf's content is: ";
  int len;
  len=strlen(str);
  len=len%size;
  buf[len]='\0';              
  cout<<buf<<endl;            //显示出buf中的内容
  fclose(stream);
  return 0;
}
