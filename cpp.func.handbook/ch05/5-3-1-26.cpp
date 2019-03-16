#include <string>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   basic_string <char> str("abcde");
   cout<<"Before reserve  the capacity of str is:"<<str.capacity()<<endl;  //打印耿ctr的最小内存容量
   str.reserve(50);                    
   cout<<"After reserve	the capacity of str is:"<<str.capacity()<<endl;
   return 0;
}
