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
  stream=fopen("temp2.txt","w");       //��ֻ���ķ�ʽ���ļ�temp2.txt  
  setvbuf(stream,buf,_IOFBF,size);                 //����stream�Ļ�����Ϊbuf,
  fputs(str,stream);                 //���ַ���strд���ļ���ȥ
  cout<<"The buf's content is: ";
  int len;
  len=strlen(str);
  len=len%size;
  buf[len]='\0';              
  cout<<buf<<endl;            //��ʾ��buf�е�����
  fclose(stream);
  return 0;
}
