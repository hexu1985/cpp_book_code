#include <set>
#include <iostream>

int main( ) 
{
   using namespace std;
   multiset <char> ctr;
   ctr.insert('a');
   ctr.insert('b');
   ctr.insert('a');
   int i;
   i=ctr.count('a');           //����ؼ���Ϊ�ַ�'a'��Ԫ�صĸ�����
   if(i==0)
	   cout<<"There is no such key!"<<endl;
   else
	   cout<<"The number of key is: "<<i<<endl;
   return 0;
}
