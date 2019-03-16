#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr1(3),ctr2(3);
   int i;
   for(i=0;i<3;i++)
   {
	   ctr1[i]='a'+i;
	   ctr2[i]='A'+i;
   }
   if(ctr1>=ctr2)
	   cout<<"ctr1>=ctr2"<<endl;
   else 
	   cout<<"ctr1<ctr2"<<endl;
   return 0;
}
