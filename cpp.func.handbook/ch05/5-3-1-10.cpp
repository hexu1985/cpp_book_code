#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   string str("abcd");
   const char *ptr;
   ptr=str.data();
   cout<<"ptr = "<<ptr<<endl;

   return 0;
}
