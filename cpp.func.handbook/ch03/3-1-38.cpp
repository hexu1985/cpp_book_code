#include<iostream.h>
#include<stdio.h>

int main()
{
  char ch;
  fpos_t pos;
  FILE *stream;
  stream=fopen("temp.txt","r");  //�Զ��ķ�ʽ��temp.txt�ļ�
  ch=fgetc(stream);
  cout<<"Before fgetpos ch= "<<ch<<endl;
  fgetpos(stream,&pos);
  ch=fgetc(stream);
  cout<<"After fgetpos and fgetc ch= "<<ch<<endl;
  fsetpos(stream,&pos);
  ch=fgetc(stream);
  cout<<"After fsetpos ch= "<<ch<<endl;
  fclose(stream);
  return 0;
}
