#include <deque>
#include <iostream>

int main( ) 
{
   using namespace std;
   deque <char> ctr(2);
   ctr[0]='a';
   ctr[1]='b';
   char &ch1=ctr.at(0);
   char &ch2=ctr.at(1);
   cout<<ch1<<endl;
   cout<<ch2<<endl;
   return 0;
}
