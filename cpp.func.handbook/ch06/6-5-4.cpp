#include <set>
#include <iostream>

int main( ) 
{
   using namespace std;
   multiset <char> ctr;
   ctr.insert('a');
   ctr.insert('b');
   ctr.insert('c');
   ctr.clear();         //���multiset����
   if(ctr.empty())         //multiset����Ϊ��ʱ
	   cout<<"The container is empty"<<endl;
   else             //multiset����Ϊ�ǿ�ʱ
	   cout<<"The container is not empty"<<endl;
   return 0;
}
