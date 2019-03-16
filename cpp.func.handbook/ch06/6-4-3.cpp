#include <map>
#include <iostream>

int main( ) 
{
   using namespace std;
   multimap <int,char> ctr;
   ctr.insert(pair <int,char>(1,'a'));
   ctr.insert(pair <int,char>(2,'b'));
   ctr.insert(pair <int,char>(3,'c'));
   ctr.clear();         //清空multimap容器
   if(ctr.empty())         //multimap容器为空时
	   cout<<"The container is empty"<<endl;
   else             //multimap容器为非空时
	   cout<<"The container is not empty"<<endl;
   return 0;
}
