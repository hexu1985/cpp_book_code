#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   string str("12345123456");

   //����ʹ�õ�һ����Ա����
   cout<<"The position not appear 2 is: "<<str.find_first_not_of("12")<<endl;

    //����ʹ�õڶ�����Ա����
   const char *_ptr1="123";
   cout<<"The position not appear "<<_ptr1<<" is: "<<str.find_first_not_of(_ptr1)<<endl;

   //����ʹ�õ�������Ա����
   const char *_ptr2="1234";
   cout<<"The position not appear "<<_ptr2<<" is: "<<str.find_first_not_of(_ptr2,0,2)<<endl;

   //����ʹ�õ��ĸ���Ա����
   string str2("12");
   cout<<"The position not appear "<<str2<<" is: "<<str.find_first_not_of(str2)<<endl;

   return 0;
}
