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
  if(ctr1==ctr2)          //��ctr1��ctr2��ͬʱ
	   cout<<"They are equal"<<endl;
  else         //��ctr1��ct2��ͬʱ
	   cout<<"They are not equal"<<endl;
   
   return 0;
}
