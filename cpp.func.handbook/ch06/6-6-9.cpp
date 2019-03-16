#include <set>
#include <iostream>
using namespace std;

int main( ) 
{
   set <char> ctr;
   ctr.insert('a');
   set <char> ctr2(less<char>( ),ctr.get_allocator());
   cout<<"ctr2's size is: "<<ctr2.size<<endl;
   return 0;
}
