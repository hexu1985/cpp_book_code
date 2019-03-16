#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  struct stat statbuf;
  stat("temp.txt",&statbuf);
  cout<<"The file on drive "<<statbuf.st_dev+'A'<<endl;  //显示st_dev的内容 
  cout<<"The st_ino is:"<<statbuf.st_ino<<endl;         //显示st_ino的内容
  cout<<"The st_mode is:"<<statbuf.st_mode<<endl;     //显示st_mode的内容
  cout<<"The st_nlink is:"<<statbuf.st_nlink<<endl;     //显示st_nlink的内容
  cout<<"The st_uid is:"<<statbuf.st_uid<<endl;         //显示st_uid的内容
  cout<<"The st_gid is:"<<statbuf.st_gid<<endl;         //显示st_gid的内容
  cout<<"The st_size is:"<<statbuf.st_size<<endl;       //显示st_size的内容
  cout<<"The st_atime is:"<<statbuf.st_atime<<endl;     //显示st_atime的内容
  return 0;
}
