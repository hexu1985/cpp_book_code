#include<string.h>

int main()
{
  char ch;
  cout<<"Please Insert a string:"<<endl;
  ch=fgetchar();                  //��stdin��Ԥ��ȡһ���ַ�
  cout<<"What you insert is:";
  while(ch!=EOF)                    //��stdin��������ʾ����
  {
	  cout<<ch;                
	  ch=fgetchar();                 //��ȡ��һ���ַ�
  }
  return 0;
}
