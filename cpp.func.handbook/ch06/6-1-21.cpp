#include <deque>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   deque <int> ctr(len);
   int i;
   for(i=0;i<len;i++)ctr[i]=i;    //������ȸ�ctr��ֵ
   cout<<"The current deque's length is: ";
   cout<<ctr.size()<<endl;
   return 0;
}
