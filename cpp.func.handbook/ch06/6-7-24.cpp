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
   if(ctr1!=ctr2)         //��ctr1��ct2��ͬʱ
	   cout<<"They are not equal"<<endl;
   else           //��ctr1��ctr2��ͬʱ
	   cout<<"They are equal"<<endl;
   return 0;
}
