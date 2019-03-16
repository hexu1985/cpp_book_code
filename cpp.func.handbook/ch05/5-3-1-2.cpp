#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	string s;
   //使用第一个函数。
   cout<<"1:"<<endl;
   const char _ptr1[20]="12";
   s.assign(_ptr1);
   cout<<"After assigning with "<<_ptr1;
   cout<<" the string is: "<<s<<endl;
   
   //使用第二个函数。
   cout<<"2:"<<endl;
   const char _ptr2[20]="abc";
   int _count=2;
   cout<<"The _ptr2 is:"<<_ptr2<<endl;
   s.assign(_ptr2,_count);
   cout<<"After assigning ";
   cout<<" the string is: "<<s<<endl; 

   //使用第三个函数。
   cout<<"3:"<<endl;
   string _str3("123456");
   int _off=2;
  cout<<"The _str3 is:"<<_str3<<endl;
   s.assign(_str3,_off,_count);
   cout<<"After assigning ";
   cout<<" the string is: "<<s<<endl; 

   //使用第四个函数。
   cout<<"4:"<<endl;
   string _str4("123456");
   cout<<"The _str4 is:"<<_str4<<endl;
   s.assign(_str4);
   cout<<"After assigning ";
   cout<<" the string is: "<<s<<endl; 

   //使用第五个函数。
   cout<<"5:"<<endl;
   char _ch='1';
   cout<<"The _ch is:"<<_ch<<endl;
   s.assign(_count,_ch);
   cout<<"After assigning ";
   cout<<" the string is: "<<s<<endl; 

   //使用第六个函数。
   cout<<"6:"<<endl;
   string _str6("123456");
   cout<<"The _str6 is:"<<_str6<<endl;
   s.assign(_str6.begin()+2,_str6.end());
   cout<<"After assigning ";  
   cout<<" the string is: "<<s<<endl; 
   
   return 0;
}
