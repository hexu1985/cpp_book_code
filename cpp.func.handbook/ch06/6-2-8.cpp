#include <list>
#include <iostream>

int main( ) 
{
   using namespace std;
   list <char> ctr;
   ctr.push_back('a');
   ctr.push_back('b');
   char &i=ctr.front();       //��λ��ctr�Ŀ�ʼλ��
   cout<<"The first element is:"<<i<<endl;     //��ӡ����һ��Ԫ��
   return 0;
}
