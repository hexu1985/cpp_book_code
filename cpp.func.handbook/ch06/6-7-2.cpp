#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr(2);
   ctr[0]='a';
   ctr[1]='b';
   char &ch1=ctr.at(0);     //ȡ��ctr��0λ�õĵ�ַ
   char &ch2=ctr.at(1);     //ȡ��ctr��1λ�õĵ�ַ
   cout<<ch1<<endl;        //��ʾch1������ 
   cout<<ch2<<endl;    //��ʾch2������
   return 0;
}
