#include<string.h>

int main()
{
  char ch;
  cout<<"Please Insert a string:"<<endl;
  ch=fgetchar();                  //从stdin中预读取一个字符
  cout<<"What you insert is:";
  while(ch!=EOF)                    //将stdin的内容显示出来
  {
	  cout<<ch;                
	  ch=fgetchar();                 //读取下一个字符
  }
  return 0;
}
