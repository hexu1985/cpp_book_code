#include <set>
#include <iostream>

int main( ) 
{
   using namespace std;
   multiset <char> ctr1,ctr2;
   int i;
   for(i=0;i<3;i++)
   {
	   ctr1.insert((i,'a'+i));
	   ctr2.insert((i,'A'+i));
   }
   if(ctr1>ctr2)
	   cout<<"ctr1>ctr2"<<endl;
   else 
	   cout<<"ctr1<=ctr2"<<endl;
   return 0;
}
