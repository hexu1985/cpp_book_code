#include <set>
#include <iostream>

int main( ) 
{
   using namespace std;
   set <char> ctr;
   ctr.insert('a');
   ctr.insert('b');
   ctr.insert('c');
   ctr.clear();         //���set����
   if(ctr.empty())         //set����Ϊ��ʱ
	   cout<<"The container is empty"<<endl;
   else             //set����Ϊ�ǿ�ʱ
	   cout<<"The container is not empty"<<endl;
   return 0;
}
