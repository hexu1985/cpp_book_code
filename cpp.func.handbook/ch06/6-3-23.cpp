#include <map>
#include <iostream>

int main( ) 
{
   using namespace std;
   map <int,char> ctr1,ctr2;
   int i;
   for(i=0;i<3;i++)     //下面给ctr1和ctr2赋值
   {
	   ctr1.insert(pair <int,char>(i,'a'+i));
	   ctr2.insert(pair <int,char>(i,'A'+i));
   }
   if(ctr1<ctr2)
	   cout<<"ctr1<ctr2"<<endl;
   else 
	   cout<<"ctr1>=ctr2"<<endl;
   return 0;
}
