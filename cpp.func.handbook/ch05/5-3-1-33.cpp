#include <string>
#include <iostream>
using namespace std;

int main( ) 
{
   basic_string <char> str1;
   const char *str2="!!";
    basic_string <char> str3("1234");
   
   //����ʹ�õ�һ����Ա����
   str1='c';
   cout<<"str1 = "<<str1<<endl;

   //����ʹ�õڶ�����Ա����
   str1=str2;
   cout<<"str1 = "<<str1<<endl;

   //����ʹ�õ�������Ա����
   str1=str3;
   cout<<"str1 = "<<str1<<endl;

   return 0;
}
