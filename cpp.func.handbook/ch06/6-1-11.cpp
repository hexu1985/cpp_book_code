#include <deque>
#include <iostream>

int main( ) 
{
   using namespace std;
   deque <char> ctr(2);
   deque <char> ctr2(ctr.get_allocator());
   return 0;
}
