#include <string>
#include <iostream>

int main( ) 
{
   using namespace std;
   string str1("abc");
   basic_string <char> str2(str1.get_allocator());
   cout<<"The str2's length is: "<<str2.length()<<endl;
   return 0;
}
