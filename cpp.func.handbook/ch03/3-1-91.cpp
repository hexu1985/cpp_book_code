#include<iostream.h>
#include<sys\stat.h>
#include<io.h>

int main()
{
  int handle;
  char *buf="12345";
  handle=_creat("temp.txt",S_IWRITE);        //创建文件temp.txt
  if(handle>=0)                          //创建成功时
  {
	  cout<<"Success to creat temp.txt"<<endl;
	  cout<<"Now put the buf into the temp.txt file"<<endl;
      write(handle,buf,5);                  //把buf的内容写入handle对应的文件
  }
  else                                 //创建失败时
	 cout<<"error when creating temp.txt"<<endl;
  close(handle);                        //关闭文件
  return 0;
}
