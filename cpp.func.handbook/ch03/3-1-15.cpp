#include<iostream.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>
#include<string.h>

int main()
{
  int handle;
  handle=creat("eof.txt",0);
  if(eof(handle))
	    cout<<"This is the end of the file"<<endl;
  else 
	    cout<<"It hadn't reach the end of the file"<<endl;
    close(handle);
  return 0;
}
