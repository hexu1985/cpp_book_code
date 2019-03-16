#include <string>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   basic_string <char> str("abcde");
   cout<<"The str is: "<<str<<endl;
   cout<<"The size of str is: "<<str.size()<<endl;
   str.resize(20,'1');
   cout<<"After resize it"<<endl;
   cout<<"The str is: "<<str<<endl;
   cout<<"The size of str is: "<<str.size()<<endl;
   return 0;
}
