#include <string>
#include <iostream>
using namespace std;

int main( ) 
{
   basic_string <char> str1("ab");
   basic_string <char> str2("1234");
   

   cout<<"Before exchange with ctr2 the ctr1 is:";
   cout<<str1<<endl;                       //��ctr1��ӡ����
   
   cout<<"After exchange with ctr2 the ctr1 is:";   
   str1.swap(str2);          //��ctr1��������ctr2����
   cout<<str1<<endl;            //��ctr1��ӡ����

   return 0;
}
