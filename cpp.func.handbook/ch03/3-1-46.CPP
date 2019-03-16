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
  handle=open("temp.txt",O_RDONLY);  //以读的方式打开temp.txt文件
  if(getftime(handle,&ftimep)==0)
  {
	  cout<<"The year is:"<<ftimep.ft_year<<endl;
	  cout<<"The month is:"<<ftimep.ft_month<<endl;
	  cout<<"The hour is:"<<ftimep.ft_hour<<endl;
	  cout<<"The min is:"<<ftimep.ft_min<<endl;
	  cout<<"The tsec is:"<<ftimep.ft_tsec<<endl;
  }
  else
	  cout<<"Failed to read the date information!"<<endl;
  close(handle);               //关闭文件
  return 0;
}
