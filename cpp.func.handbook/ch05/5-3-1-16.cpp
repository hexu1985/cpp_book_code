#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   string str("12345123456");

   //����ʹ�õ�һ����Ա����
   cout<<"The position appear 2 is: "<<str.find_first_of("23")<<endl;

    //����ʹ�õڶ�����Ա����
   const char *_ptr1="45";
   cout<<"The position appear "<<_ptr1<<" is: "<<str.find_first_of(_ptr1)<<endl;

   //����ʹ�õ�������Ա����
   const char *_ptr2="34567";
   cout<<"The position appear "<<_ptr2<<" is: "<<str.find_first_of(_ptr2,0,2)<<endl;

   //����ʹ�õ��ĸ���Ա����
   string str2("234");
   cout<<"The position appear "<<str2<<" is: "<<str.find_first_of(str2)<<endl;

   return 0;
}
