#include <string>
#include <iostream>
using namespace std;

int main( ) 
{
   basic_string <char> str1("ab");
   basic_string <char> str2("1234");
   

   cout<<"Before exchange with ctr2 the ctr1 is:";
   cout<<str1<<endl;                       //把ctr1打印出来
   
   cout<<"After exchange with ctr2 the ctr1 is:";   
   str1.swap(str2);          //让ctr1的内容与ctr2交换
   cout<<str1<<endl;            //把ctr1打印出来

   return 0;
}
