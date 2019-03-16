#include<iostream.h>
#include<io.h>
#include<dos.h>

int main()
{
  int handle;
  char *buf="12345";
  handle=creatnew("creatnew.txt",FA_RDONLY);
  if(handle>=0)
  {
	cout<<"Success to creat creatnew.txt"<<endl;
	cout<<"Now put the buf into the creatnew.txt file"<<endl;
    write(handle,buf,5);
  }
  else
	  cout<<"error when creating creatnew.txt"<<endl;
  close(handle);
  return 0;
}
