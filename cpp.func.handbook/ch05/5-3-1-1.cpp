#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   //使用第一个函数。
   cout<<"1:"<<endl;
   const char _ptr1[20]="12";
   string string1("Number:");
   cout<<"The orignial string is:"<<string1<<endl;
   string1.append(_ptr1);
   cout<<"After appending with "<<_ptr1;
   cout<<" the string is: "<<string1<<endl;
   
   //使用第二个函数。
   cout<<"2:"<<endl;
   const char _ptr2[20]="abc";
   int _count=2;
   string string2("Character:");
   cout<<"The orignial string is:"<<string2<<endl;
   string2.append(_ptr2,_count);
   cout<<"After appending ";
   cout<<" the string is: "<<string2<<endl; 

   //使用第三个函数。
   cout<<"3:"<<endl;
   string _str3("123456");
   int _off=2;
   string string3("Number:");
   cout<<"The orignial string is:"<<string3<<endl;
   string3.append(_str3,_off,_count);
   cout<<"After appending ";
   cout<<" the string is: "<<string3<<endl; 

   //使用第四个函数。
   cout<<"4:"<<endl;
   string _str4("123456");
   string string4("Number:");
   cout<<"The orignial string is:"<<string4<<endl;
   string4.append(_str4);
   cout<<"After appending ";
   cout<<" the string is: "<<string4<<endl; 

   //使用第五个函数。
   cout<<"5:"<<endl;
   char _ch='1';
   string string5("Number:");
   cout<<"The orignial string is:"<<string5<<endl;
   string5.append(_count,_ch);
   cout<<"After appending ";
   cout<<" the string is: "<<string5<<endl; 

   //使用第六个函数。
   cout<<"6:"<<endl;
   string _str6("123456");
   string string6("Number:");
   cout<<"The orignial string is:"<<string6<<endl;
   string6.append(_str6.begin()+2,_str6.end());
   cout<<"After appending ";  
   cout<<" the string is: "<<string6<<endl; 
   
   return 0;
}