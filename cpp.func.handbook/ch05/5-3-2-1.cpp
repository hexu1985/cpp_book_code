#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   //ʹ�õ�һ��������
   char _CharTo='a';
   const char _CharFrom='b';
   cout<<"_CharTo = "<<_CharTo<<endl;
   cout<<"_CharFrom = "<<_CharFrom<<endl;

   cout<<"After assign(_CharTo,_CharFrom)"<<endl;
   char_traits <char>::assign(_CharTo,_CharFrom); //��_CharTo�趨Ϊ_CharFrom
   cout<<"_CharTo = "<<_CharTo<<endl;
   cout<<"_CharFrom = "<<_CharFrom<<endl;

   return 0;
}




