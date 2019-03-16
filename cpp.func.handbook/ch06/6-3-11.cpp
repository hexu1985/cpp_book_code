#include <map>
#include <iostream>

using namespace std;

int main( ) 
{
   map <int,int> ctr;
   map <int, int, less<int> >::key_compare kc = ctr.key_comp( ) ;
   if(kc( 1, 2 ))
   {
	   cout<<"kc(1,2) is true"<<endl;
   }
   else
   {
	   cout<<"kc(1,2) is false"<<endl;
   }
   
   return 0;
}
