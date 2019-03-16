#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   string str("12345123456");

   //下面使用第一个成员函数
   cout<<"The position not appear 3456 is: "<<str.find_last_not_of("3456")<<endl;

    //下面使用第二个成员函数
   const char *_ptr1="56";
   cout<<"The position not appear "<<_ptr1<<" is: "<<str.find_last_not_of(_ptr1)<<endl;

   //下面使用第三个成员函数
   const char *_ptr2="567";
   cout<<"The position not appear "<<_ptr2<<" is: "<<str.find_last_not_of(_ptr2,str.length(),2)<<endl;

   //下面使用第四个成员函数
   string str2("456");
   cout<<"The position not appear "<<str2<<" is: "<<str.find_last_not_of(str2)<<endl;

   return 0;
}
