#include <iostream>
#include <iomanip>
using namespace std;

int main( ) 
{
   int x=1234;     
   cout<<setbase(8)<<"Base 8:x = "<<x<<endl;
   cout<<setbase(10)<<"Base 10:x = "<<x<<endl;
   cout<<setbase(16)<<"Base 16:x = "<<x<<endl;
   cout<<setbase(0)<<"Default base:x = "<<x<<endl;
   return 0;
}
