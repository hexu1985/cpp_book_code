#include <string>
#include <iostream>
using namespace std;

int main( ) 
{
   basic_string <char> str1;
   const char *str2="!!";
    basic_string <char> str3("1234");
   
   //下面使用第一个成员函数
   str1='c';
   cout<<"str1 = "<<str1<<endl;

   //下面使用第二个成员函数
   str1=str2;
   cout<<"str1 = "<<str1<<endl;

   //下面使用第三个成员函数
   str1=str3;
   cout<<"str1 = "<<str1<<endl;

   return 0;
}
