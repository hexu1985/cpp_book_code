#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  struct stat statbuf;
  stat("temp.txt",&statbuf);
  cout<<"The file on drive "<<statbuf.st_dev+'A'<<endl;  //��ʾst_dev������ 
  cout<<"The st_ino is:"<<statbuf.st_ino<<endl;         //��ʾst_ino������
  cout<<"The st_mode is:"<<statbuf.st_mode<<endl;     //��ʾst_mode������
  cout<<"The st_nlink is:"<<statbuf.st_nlink<<endl;     //��ʾst_nlink������
  cout<<"The st_uid is:"<<statbuf.st_uid<<endl;         //��ʾst_uid������
  cout<<"The st_gid is:"<<statbuf.st_gid<<endl;         //��ʾst_gid������
  cout<<"The st_size is:"<<statbuf.st_size<<endl;       //��ʾst_size������
  cout<<"The st_atime is:"<<statbuf.st_atime<<endl;     //��ʾst_atime������
  return 0;
}
