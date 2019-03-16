#include<iostream.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys\locking.h>
#include<io.h>

int main()
{
  char buffer[100];
  FILE *stream;
  int handle;
  handle=open("temp.txt",O_RDONLY);  //以读的方式打开temp.txt文件
  long offset;
  int fromwhere;
  offset=2;
  fromwhere=0;
  stream=fdopen(handle,"r");
  if(lseek(handle,offset,fromwhere)!=-1)           //成功时
  {
    fgets(buffer,10,stream);
	cout<<"After "<<offset<<" bit The content is:"<<buffer<<endl;
  }
  else                                //失败时
   cout<<"Some error occur! "<<endl;
  return 0;
}
