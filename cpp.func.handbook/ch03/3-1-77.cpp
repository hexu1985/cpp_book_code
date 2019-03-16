#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  int handle;
  char buf[20];
  long position;
  handle=open("temp.txt",O_RDONLY);  //以读的方式打开temp.txt文件
  read(handle,buf,2);              //从文件中读取一个字符
  position=tell(handle);         //取出文件指针的当前位置
  cout<<"The file pointer's position is:"<<position<<endl;  //显示出信置
  close(handle);               //关闭文件
  return 0;
}
