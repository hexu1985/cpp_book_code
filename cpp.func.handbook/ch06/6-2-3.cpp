#include <list>
#include <iostream>

int main( ) 
{
   using namespace std;
   list <char> ctr;
   list <char>::iterator cp;
   ctr.push_back('a');
   ctr.push_back('b');
   cp=ctr.begin();       //��λ��ctr�Ŀ�ʼλ��
   cout<<"The first element is:"<<*cp<<endl;     //��ӡ����һ��Ԫ��
   return 0;
}
