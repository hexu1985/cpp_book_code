#include <list>
#include <iostream>

int main( ) 
{
   using namespace std;
   list <char> ctr;
   ctr.push_back('a');
   ctr.push_back('b');
   ctr.push_back('c');
   ctr.clear();         //清空队列
   if(ctr.empty())         //队列为空时
	   cout<<"The container is empty"<<endl;
   else             //队列为非空时
	   cout<<"The container is not empty"<<endl;
   return 0;
}
