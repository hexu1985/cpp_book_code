#include<iostream.h>
#include<sys\stat.h>
#include<fcntl.h>
#include<io.h>

int main()
{
   int stat;
   int handle;
   handle=open("temp.txt",O_WRONLY);
   stat=setmode(handle,O_TEXT);
   if(stat==0)                  //�ɹ�ʱ
	   cout<<"Success!"<<endl;
   else                       //ʧ��ʱ
	   cout<<"Fail!"<<endl;
   return 0;
}
