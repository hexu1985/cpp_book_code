#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr(3);
   ctr[0]='a';
   ctr[1]='b';
   ctr[2]='c';
   ctr.clear();         //清空vector容器
   if(ctr.empty())         //vector容器为空时
	   cout<<"The vector is empty"<<endl;
   else             //vector容器为非空时
	   cout<<"The vector is not empty"<<endl;
   return 0;
}
