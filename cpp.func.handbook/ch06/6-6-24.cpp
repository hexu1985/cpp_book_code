#include <set>
#include <iostream>

int main( ) 
{
   using namespace std;
   set <char> ctr1,ctr2;
   int i;
   for(i=0;i<3;i++)
   {
	   ctr1.insert('a'+i);
	   ctr2.insert('A'+i);
   }
  if(ctr1==ctr2)          //当ctr1与ctr2相同时
	   cout<<"They are equal"<<endl;
  else         //当ctr1与ct2不同时
	   cout<<"They are not equal"<<endl;
   
   return 0;
}
