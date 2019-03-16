#include <deque>
#include <iostream>

int main( ) 
{
   using namespace std;
   deque <char> ctr(3);
   ctr[0]='a';
   ctr[1]='b';
   ctr[2]='c';
   ctr.clear();
   if(ctr.empty())
	   cout<<"The deque is empty"<<endl;
   else
	   cout<<"The deque is not empty"<<endl;
   return 0;
}
