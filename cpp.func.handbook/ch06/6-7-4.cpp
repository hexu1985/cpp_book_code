#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr(2);
   vector <char>::iterator cp;
   ctr[0]='a';
   ctr[1]='b';
   cp=ctr.begin();       //��λ��ctr�Ŀ�ʼλ��
   cout<<"The first element is:"<<*cp<<endl;     //��ӡ����һ��Ԫ��
   return 0;
}
