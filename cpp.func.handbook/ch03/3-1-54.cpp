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
  handle=open("temp.txt",O_RDONLY);  //�Զ��ķ�ʽ��temp.txt�ļ�
  long offset;
  int fromwhere;
  offset=2;
  fromwhere=0;
  stream=fdopen(handle,"r");
  if(lseek(handle,offset,fromwhere)!=-1)           //�ɹ�ʱ
  {
    fgets(buffer,10,stream);
	cout<<"After "<<offset<<" bit The content is:"<<buffer<<endl;
  }
  else                                //ʧ��ʱ
   cout<<"Some error occur! "<<endl;
  return 0;
}
