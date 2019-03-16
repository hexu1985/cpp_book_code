#include <map>
#include <iostream>
using namespace std;

int main( ) 
{
   multimap <int,char> ctr;
   ctr.insert(pair <int,char>(1,'a'));
   multimap <int,char> ctr2(less<int>( ),ctr.get_allocator());
   cout<<"ctr2's size is: "<<ctr2.size<<endl;
   return 0;
}
