#include<iostream.h>
#include<io.h>
#include<dos.h>

int main()
{
  int handle;
  char path[150]="\\";
  handle=creattemp(path,FA_RDONLY);
  if(handle>=0)
        cout<<"Created the unique file name as "<<path<<endl;
  else
	  cout<<"error occur in Creating file"<<endl;
  close(handle);
  return 0;
}
