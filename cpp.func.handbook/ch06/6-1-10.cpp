#include <deque>
#include <iostream>

int main( ) 
{
   using namespace std;
   deque <char> ctr(2);
   ctr[0]='a';
   ctr[1]='b';
   char &i=ctr.front();       //��λ��ctr�Ŀ�ʼλ��
   cout<<"The first element is:"<<i<<endl;     //��ӡ����һ��Ԫ��
   return 0;
}
