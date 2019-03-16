#include <set>
#include <iostream>

int main( ) 
{
   using namespace std;
   multiset <char> ctr;
   ctr.insert('a');
   ctr.insert('b');
   ctr.insert('c');
   ctr.clear();         //清空multiset容器
   if(ctr.empty())         //multiset容器为空时
	   cout<<"The container is empty"<<endl;
   else             //multiset容器为非空时
	   cout<<"The container is not empty"<<endl;
   return 0;
}
