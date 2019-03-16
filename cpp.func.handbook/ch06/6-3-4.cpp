#include <map>
#include <iostream>

int main( ) 
{
   using namespace std;
   map <int,char> ctr;
   ctr.insert(pair <int,char>(1,'a'));
   ctr.insert(pair <int,char>(2,'a'));
   ctr.insert(pair <int,char>(3,'c'));
   ctr.clear();         //清空map容器
   if(ctr.empty())         //map容器为空时
	   cout<<"The container is empty"<<endl;
   else             //map容器为非空时
	   cout<<"The container is not empty"<<endl;
   return 0;
}
