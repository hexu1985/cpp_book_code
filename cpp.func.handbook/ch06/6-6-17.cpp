#include <set>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   set <int> ctr;
   int i;
   for(i=0;i<len;i++)ctr.insert(i);    //������ȸ�ctr��ֵ
   cout<<"The current set's length is: ";
   cout<<ctr.size()<<endl;
   return 0;
}
