#include <set>
#include <iostream>

int main( ) 
{
   using namespace std;
   multiset <char> ctr;
   multiset <char>::iterator cp;
   ctr.insert('a');
   ctr.insert('b');
   cp=ctr.begin();       //��λ��ctr�Ŀ�ʼλ��
   cout<<"The first element is:"<<*cp<<endl;     //��ӡ����һ��Ԫ��
   return 0;
}
