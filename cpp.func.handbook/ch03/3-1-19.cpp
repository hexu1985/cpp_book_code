#include<iostream.h>
#include<stdio.h>

int main()
{
  FILE *stream;
  char str[20];
  stream=fopen("temp.txt","r");     //��һ��temp.txt���ļ�
  fgets(str,5,stream);             //��stream�ж�ȡ5���ַ�
  if(feof(stream))               //���ﵽ�ļ��Ľ�βʱ
	  cout<<"Reached the end of the file temp.txt"<<endl;
  else                        //û�ﵽ�ļ��Ľ�βʱ
	  cout<<"Hasn't reached the end of the file temp.txt"<<endl;
  return 0;
}
