#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   basic_string <char>::iterator _It,_First,_Last;

   //����ʹ�õ�һ����Ա����
    string str1("123456");
	cout<<"str1 = "<<str1<<endl;
   _First=str1.begin();
   _First++;
   _Last=str1.end();
   _Last--;
   str1.erase(_First,_Last);
   cout<<"After erasing,str1 = "<<str1<<endl;

    //����ʹ�õڶ�����Ա����
    string str2("123456");
	cout<<"str2 = "<<str2<<endl;
    _It=str2.begin();
	_It++;
    str2.erase(_It);
	cout<<"After erasing the second element,str2 = "<<str2<<endl;

   //����ʹ�õ�������Ա����
    string str3("123456");
    cout<<"str3 = "<<str3<<endl;
    str3.erase(1,2);
    cout<<"After erasing the second element,str3 = "<<str3<<endl;

   return 0;
}
