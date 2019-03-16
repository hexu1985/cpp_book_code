#include <string>
#include <iostream>
using namespace std;

int main( ) 
{
   basic_string <char> str("abc");
   basic_string <char>::reverse_iterator rcp;
   
   cout<<"The str is: "<<str<<endl;
   cout<<"Its reverse is: ";
   for(rcp=str.rbegin();rcp!=str.rend();rcp++)
	   cout<<*rcp;
   cout<<endl;

   return 0;
}
