#include<iostream.h>
#include<io.h>
#include<fcntl.h>

int main()
{
   int handle;
   handle=open("temp.txt",O_RDONLY);        //��temp.txt�ļ�
   if(_close(handle)==0)                    //���رճɹ�ʱ
	   cout<<"Success to close temp.txt!"<<endl;
   else                                //ʧ��ʱ
	   cout<<"error occur when trying to close temp.txt"<<endl;
   return 0;
}
