#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   string str1("abcdefg");
   string str2("ABCDEFG");
   int result;
   //使用第一个函数
   result=str1.compare(str2);
   if(result>0)
	   cout<<"str1 > str2"<<endl;
   if(result==0)
	   cout<<"str1 = str2"<<endl;
   if(result<0)
	   cout<<"str1 < str2"<<endl;

   return 0;
}
