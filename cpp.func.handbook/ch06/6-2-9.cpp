#include <list>
#include <iostream>
using namespace std;

int main( ) 
{
   list <char> ctr;
   ctr.push_back('a');
   list <char> ctr2(ctr.get_allocator());
   cout<<"ctr2's size is: "<<ctr2.size<<endl;
   return 0;
}
