#include <list>
#include <iostream>

int main( ) 
{
   using namespace std;
   list <char> ctr1,ctr2;
   int i;
   for(i=0;i<3;i++)
   {
	   ctr1.push_back('a'+i);
	   ctr2.push_back('A'+i);
   }
   if(ctr1>=ctr2)
	   cout<<"ctr1>=ctr2"<<endl;
   else 
	   cout<<"ctr1<ctr2"<<endl;
   return 0;
}
