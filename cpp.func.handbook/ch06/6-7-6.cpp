#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr(3);
   ctr[0]='a';
   ctr[1]='b';
   ctr[2]='c';
   ctr.clear();         //���vector����
   if(ctr.empty())         //vector����Ϊ��ʱ
	   cout<<"The vector is empty"<<endl;
   else             //vector����Ϊ�ǿ�ʱ
	   cout<<"The vector is not empty"<<endl;
   return 0;
}
