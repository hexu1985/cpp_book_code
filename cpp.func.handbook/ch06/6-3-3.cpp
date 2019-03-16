#include <map>
#include <iostream>

int main( ) 
{
   using namespace std;
   map <int,char> ctr;
   ctr.insert(pair <int,char>(1,'a'));
   ctr.insert(pair <int,char>(2,'b'));
   ctr.insert(pair <int,char>(1,'c'));
   int i;
   i=ctr.count(1);
   if(i==0)
	   cout<<"There is no such key!"<<endl;
   else
	   cout<<"The number of key is: "<<i<<endl;
   return 0;
}
