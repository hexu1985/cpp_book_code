#include <map>
#include <iostream>

int main( ) 
{
   using namespace std;
   map <int,char> ctr1,ctr2;
   int i;
   for(i=0;i<3;i++)
   {
	   ctr1.insert(pair <int,char>(i,'a'+i));
	   ctr2.insert(pair <int,char>(i,'A'+i));
   }
   if(ctr1!=ctr2)         //��ctr1��ct2��ͬʱ
	   cout<<"They are not equal"<<endl;
   else           //��ctr1��ctr2��ͬʱ
	   cout<<"They are equal"<<endl;
   return 0;
}