#include<iostream.h>
#include<stdio.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
  char ch;
  int handle;
  struct ftime ftimep;
  handle=open("temp.txt",O_WRONLY);  //�Զ��ķ�ʽ��temp.txt�ļ�
  ftimep.ft_year=22;
  ftimep.ft_month=1;
  ftimep.ft_hour=1;
  ftimep.ft_min=1;
  ftimep.ft_tsec=1;
  if(setftime(handle,&ftimep)==0)
	  cout<<"Success to set the date information!"<<endl;
  else
	  cout<<"Failed to set the date information!"<<endl;
  close(handle);               //�ر��ļ�
  return 0;
}