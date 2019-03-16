#include <string>
#include <iostream>
using namespace std;

int main( ) 
{
   string str1("abcefghi");
   basic_string <char> str2;
   str2=str1.substr(3);
   cout<<"str2 = "<<str2<<endl;
   str2=str1.substr(2,3);
   cout<<"str2 = "<<str2<<endl;
   return 0;
}
