#include <string>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   basic_string <char> str("abcde");
   cout<<"Before reserve  the capacity of str is:"<<str.capacity()<<endl;  //��ӡ��ctr����С�ڴ�����
   str.reserve(50);                    
   cout<<"After reserve	the capacity of str is:"<<str.capacity()<<endl;
   return 0;
}
