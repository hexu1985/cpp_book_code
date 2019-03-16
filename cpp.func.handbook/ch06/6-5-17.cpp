#include <set>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   multiset <int> ctr;
   int i;
   for(i=0;i<len;i++)ctr.insert(i);    //下面给先给ctr赋值
   cout<<"The current multiset's length is: ";
   cout<<ctr.size()<<endl;
   return 0;
}
