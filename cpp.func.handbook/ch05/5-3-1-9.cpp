#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   string str1("abcdefg");
   string str2("ABCDEFG");
   int _count=2;
   int _pos=1;
   str1.copy(str2.begin(),_count,_pos);
   cout<<"str1 is: "<<str1<<endl;
   cout<<"str2 is: "<<str2<<endl;
   return 0;
}
