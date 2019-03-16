#include <set>
#include <iostream>

int main( ) 
{
   using namespace std;
   set <char> ctr;
   ctr.insert('a');
   ctr.insert('b');
   ctr.insert('c');
   ctr.clear();         //清空set容器
   if(ctr.empty())         //set容器为空时
	   cout<<"The container is empty"<<endl;
   else             //set容器为非空时
	   cout<<"The container is not empty"<<endl;
   return 0;
}
