#include<iostream.h>
#include<sys\stat.h>
#include<io.h>

int main()
{
  int handle;
  char *buf="12345";
  handle=_creat("temp.txt",S_IWRITE);        //�����ļ�temp.txt
  if(handle>=0)                          //�����ɹ�ʱ
  {
	  cout<<"Success to creat temp.txt"<<endl;
	  cout<<"Now put the buf into the temp.txt file"<<endl;
      write(handle,buf,5);                  //��buf������д��handle��Ӧ���ļ�
  }
  else                                 //����ʧ��ʱ
	 cout<<"error when creating temp.txt"<<endl;
  close(handle);                        //�ر��ļ�
  return 0;
}
