#include <map>
#include <iostream>

int main( ) 
{
   using namespace std;
   multimap <int,char> ctr;
   multimap <int,char>::iterator cp;
   ctr.insert(pair <int,char>(1,'a'));
   ctr.insert(pair <int,char>(2,'b'));
   cp=ctr.begin();       //��λ��ctr�Ŀ�ʼλ��
   cout<<"The first element is:"<<cp->second<<endl;     //��ӡ����һ��Ԫ��
   return 0;
}
