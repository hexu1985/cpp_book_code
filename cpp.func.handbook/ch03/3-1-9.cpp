#include<iostream.h>
#include<sys\stat.h>
#include<io.h>

int main()
{
  int handle;
  char *buf="12345";
  handle=creat("temp.txt",S_IWRITE);
  if(handle>=0)
  {
	  cout<<"Success to creat temp.txt"<<endl;
	  cout<<"Now put the buf into the temp.txt file"<<endl;
    write(handle,buf,5);
  }
  else
	  cout<<"error when creating temp.txt"<<endl;
  close(handle);
  return 0;
}
