#include <string>
#include <iostream>
using namespace std;

int main( ) 
{
	basic_string <char>::size_type _off,_count;
	_off=1;
	_count=2;

   //����ʹ�õ�һ����Ա����
   basic_string <char> str1( "12345" );
   const char *_ptr1= "a";
   str1.insert(1,_ptr1);
   cout<<"str1 = "<<str1<<endl;

   //����ʹ�õڶ�����Ա����
   basic_string <char> str2( "12345" );
   const char *_ptr2 = "abcde";
   str2.insert(1,_ptr2,2);
   cout<<"str2 = "<<str2<<endl;

   //����ʹ�õ�������Ա����
   basic_string <char> str3( "12345" );
   basic_string <char> _str3("a");
   str3.insert(1,_str3);
   cout<<"str3 = "<<str3<<endl;

   //����ʹ�õ��ĸ���Ա����
   basic_string <char> str4( "12345" );
   basic_string <char> _str4("abcde");
   str4.insert(1,_str4,_off,_count);
   cout<<"str4 = "<<str4<<endl;

   //����ʹ�õ������Ա����
   basic_string <char> str5( "12345" );
   str5.insert(1,_count,'a');
   cout<<"str5 = "<<str5<<endl;

  //����ʹ�õ�������Ա����
   basic_string <char> str6( "12345" );
   basic_string <char>::iterator _It6;
   _It6=str6.begin();
   _It6+=2;
   str6.insert(_It6,'a');
   cout<<"str6 = "<<str6<<endl;

     //����ʹ�õ��߸���Ա����
   basic_string <char> str7( "12345" );
   basic_string <char> _str7( "abcdefg" );
   str7.insert(str7.begin(),_str7.begin()+1,_str7.end()-1);
   cout<<"str7 = "<<str7<<endl;

     //����ʹ�õڰ˸���Ա����
   basic_string <char> str8( "12345" );
   str8.insert(str8.begin()+1,_count,'a');
   cout<<"str8 = "<<str8<<endl;

   return 0;
}