#include <deque>
#include <iostream>

int main( ) 
{
   using namespace std;
   deque <char> ctr(2);
   ctr[0]='a';
   ctr[1]='b';
   char &ch=ctr.back();
   cout<<"The last element is:"<<ch<<endl;
   return 0;
}
