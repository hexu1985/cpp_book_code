#include <string>
#include <iostream>

int main( ) 
{
   using namespace std;
   string  str("1234");
   cout<<"The str's capacity is: "<<str.capacity()<<endl;
   basic_string <char>::size_type len;
   len=str.length();
   cout<<"Its length is: "<<len<<endl;
   return 0;
}
