#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
  FILE *stream;
  int ch;
  stream=fopen("temp.txt","r");         //��ֻ����ʽ��һ������temp.txt���ļ�
  ch=getc(stream);                  //��stream��Ԥ��ȡһ���ַ�
  while(ch!=EOF)                    //��temp.txt��������ʾ����
  {
	  cout<<(ch-'1'+1);                 //��Ϊch��ֵΪascii��,�ʰ���ת���ַ�
	  ch=getc(stream);                
  }
  cout<<endl;
  fclose(stream);                 //�ر��ļ�
  return 0;
}
