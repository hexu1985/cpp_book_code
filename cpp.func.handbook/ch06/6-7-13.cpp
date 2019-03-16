#include <vector>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   vector <int> ctr(len); 
   vector <int>::size_type l;
   int i;
   for(i=0;i<len;i++)ctr[i]=i;    //下面给先给ctr赋值
   cout<<"the max_size of ctr is:";
   l=ctr.max_size();
   cout<<l<<endl;
   return 0;
}
