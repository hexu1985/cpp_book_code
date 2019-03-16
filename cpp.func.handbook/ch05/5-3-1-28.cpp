#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   string str("12345123456");

   //下面使用第一个成员函数
   cout<<"The position appear 2 is: "<<str.rfind("2")<<endl;

    //下面使用第二个成员函数
   const char *_ptr1="34";
   cout<<"The position appear "<<_ptr1<<" is: "<<str.rfind(_ptr1)<<endl;

   //下面使用第三个成员函数
   const char *_ptr2="3456";
   cout<<"The position appear "<<_ptr2<<" is: "<<str.rfind(_ptr2,str.length(),3)<<endl;

   //下面使用第四个成员函数
   string str2("45");
   cout<<"The position appear "<<str2<<" is: "<<str.rfind(str2)<<endl;

   return 0;
}
