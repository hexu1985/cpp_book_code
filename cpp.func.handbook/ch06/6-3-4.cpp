#include <map>
#include <iostream>

int main( ) 
{
   using namespace std;
   map <int,char> ctr;
   ctr.insert(pair <int,char>(1,'a'));
   ctr.insert(pair <int,char>(2,'a'));
   ctr.insert(pair <int,char>(3,'c'));
   ctr.clear();         //���map����
   if(ctr.empty())         //map����Ϊ��ʱ
	   cout<<"The container is empty"<<endl;
   else             //map����Ϊ�ǿ�ʱ
	   cout<<"The container is not empty"<<endl;
   return 0;
}
