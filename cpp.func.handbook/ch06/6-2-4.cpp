#include <list>
#include <iostream>

int main( ) 
{
   using namespace std;
   list <char> ctr;
   ctr.push_back('a');
   ctr.push_back('b');
   ctr.push_back('c');
   ctr.clear();         //��ն���
   if(ctr.empty())         //����Ϊ��ʱ
	   cout<<"The container is empty"<<endl;
   else             //����Ϊ�ǿ�ʱ
	   cout<<"The container is not empty"<<endl;
   return 0;
}
