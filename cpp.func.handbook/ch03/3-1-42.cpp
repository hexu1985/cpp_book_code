#include<iostream.h>
#include<stdio.h>
#include<string.h>

int main()
{
  FILE *stream;
  int ch;
  stream=fopen("temp.txt","r");         //以只读方式打开一个名叫temp.txt的文件
  ch=getc(stream);                  //从stream中预读取一个字符
  while(ch!=EOF)                    //将temp.txt的内容显示出来
  {
	  cout<<(ch-'1'+1);                 //因为ch的值为ascii码,故把它转成字符
	  ch=getc(stream);                
  }
  cout<<endl;
  fclose(stream);                 //关闭文件
  return 0;
}
