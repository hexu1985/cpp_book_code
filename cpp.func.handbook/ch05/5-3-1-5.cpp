#include <string>
#include <iostream>

int main( ) 
{
   using namespace std;
   string ctr("abc");
   basic_string <char>::iterator cp;
   cp=ctr.begin();       //��λ��ctr�Ŀ�ʼλ��
   cout<<"The first element is:"<<*cp<<endl;     //��ӡ����һ��Ԫ��
   return 0;
}
