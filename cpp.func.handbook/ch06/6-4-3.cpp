#include <map>
#include <iostream>

int main( ) 
{
   using namespace std;
   multimap <int,char> ctr;
   ctr.insert(pair <int,char>(1,'a'));
   ctr.insert(pair <int,char>(2,'b'));
   ctr.insert(pair <int,char>(3,'c'));
   ctr.clear();         //���multimap����
   if(ctr.empty())         //multimap����Ϊ��ʱ
	   cout<<"The container is empty"<<endl;
   else             //multimap����Ϊ�ǿ�ʱ
	   cout<<"The container is not empty"<<endl;
   return 0;
}
