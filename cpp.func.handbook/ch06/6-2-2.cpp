#include <list>
#include <iostream>

int main( ) 
{
   using namespace std;
   list <char> ctr;
   ctr.push_back('a');
   ctr.push_back('b');
   char &ch=ctr.back();  //ȡ��ctr���һ��Ԫ�صĵ�ַ
   cout<<"The last element is:"<<ch<<endl;  //��ʾ���һԪ�ĵ�ַ��
   return 0;
}
