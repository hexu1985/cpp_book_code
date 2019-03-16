#include <set>
#include <iostream>

using namespace std;

int main( ) 
{
   multiset <int> ctr;
   multiset <int, less<int> >::value_compare vc = ctr.value_comp( ) ;
   multiset <int>:: iterator cp1,cp2,cp3;
   pair< multiset<int>::iterator, bool > cpr1, cpr2;

   int i;
   for(i=0;i<3;i++)                         //¸øctr¸³Öµ
	   ctr.insert(i); 
   cpr1.first=ctr.begin();
   cpr2.first=ctr.begin();
   cpr2.first++;

   if(vc(*cpr1.first,*cpr2.first))
	   cout<<"element 1 is precedes element 2"<<endl;
   else
	   cout<<"element 1 does not precede element 2"<<endl;

   return 0;
}
