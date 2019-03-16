#include <string>
#include <iostream>

int main( ) 
{
   using namespace std;
   string str("abc");
   basic_string <char>::iterator cp;
   cout<<"The str is: ";
   for(cp=str.begin();cp!=str.end();cp++)
	   cout<<*cp;
   cout<<endl;
   return 0;
}
