#include <string>
#include <iostream>

int main( ) 
{
   using namespace std;
   string str("abcd");
   int i;
   for(i=0;i<str.length();i++)
   {
	   cout<<"The "<<(i+1)<<" element is:";
	   cout<<str.at(i)<<endl;
   }
   return 0;
}
