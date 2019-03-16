#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  int handle;
  struct stat statbuf;
  handle=open("temp.txt",O_RDONLY);  //以读的方式打开temp.txt文件
  fstat(handle,&statbuf);
  cout<<"The file on drive "<<statbuf.st_dev+'A'<<endl;
  cout<<"The st_ino is:"<<statbuf.st_ino<<endl;
  cout<<"The st_mode is:"<<statbuf.st_mode<<endl;
  cout<<"The st_nlink is:"<<statbuf.st_nlink<<endl;
  cout<<"The st_uid is:"<<statbuf.st_uid<<endl;
  cout<<"The st_gid is:"<<statbuf.st_gid<<endl;
  cout<<"The st_size is:"<<statbuf.st_size<<endl;
  cout<<"The st_atime is:"<<statbuf.st_atime<<endl;
  close(handle);               //关闭文件
  return 0;
}
