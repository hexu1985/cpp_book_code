#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr(2);
   ctr[0]='a';
   ctr[1]='b';
   char &ch=ctr.back();  //ȡ��ctr���һ��Ԫ�صĵ�ַ
   cout<<"The last element is:"<<ch<<endl;  //��ʾ���һԪ�ĵ�ַ��
   return 0;
}
