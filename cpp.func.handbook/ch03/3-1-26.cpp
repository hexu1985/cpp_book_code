#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  int handle;
  long len;
  handle=open("temp.txt",O_RDWR);              //以读写的方式打开文件temp.txt
  len=filelength(handle);
  cout<<"The length of file temp.txt is:"<<len<<endl;  //显示temp.txt文件的大小
  close(handle);               //关闭文件
  return 0;
}
