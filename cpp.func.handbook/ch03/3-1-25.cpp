#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
  FILE *stream;
  char str[20];
  stream=fopen("temp.txt","r");         //��ֻ����ʽ��һ������temp.txt���ļ�
  fgets(str,20,stream);                  //��stream��ȡһ���ַ���
  cout<<str<<endl;
  fclose(stream);                 //�ر��ļ�
  return 0;
}
