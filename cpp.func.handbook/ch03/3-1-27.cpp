#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  FILE *stream;
  int handle1,handle2,handle3;
  handle1=open("temp.txt",O_RDWR);              //以读写的方式打开文件temp.txt
  stream=fdopen(handle1,"w");                   //用stream流与handle1相关联
  handle2=dup(handle1);                         //复制handle1到handle2中去
  cout<<"The handle1 is:"<<handle1<<endl;       //显示handle1的值
  cout<<"The handle2 is:"<<handle2<<endl;       //显示handle2的值
  handle3=fileno(stream);
  cout<<"After fileno the handle of stream is:"<<handle3<<endl; //显示fileno(stream)的值
  fclose(stream);
  return 0;
}
