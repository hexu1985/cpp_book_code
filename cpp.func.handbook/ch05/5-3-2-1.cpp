#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   //使用第一个函数。
   char _CharTo='a';
   const char _CharFrom='b';
   cout<<"_CharTo = "<<_CharTo<<endl;
   cout<<"_CharFrom = "<<_CharFrom<<endl;

   cout<<"After assign(_CharTo,_CharFrom)"<<endl;
   char_traits <char>::assign(_CharTo,_CharFrom); //将_CharTo设定为_CharFrom
   cout<<"_CharTo = "<<_CharTo<<endl;
   cout<<"_CharFrom = "<<_CharFrom<<endl;

   return 0;
}




