#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr(2);
   ctr[1]='a';
   ctr[2]='b';
   vector <char> ctr2(ctr.get_allocator());
   
   return 0;
}
