#include <map>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   multimap <int,int> ctr;
   int i;
   for(i=0;i<len;i++)ctr.insert(pair <int,int>(i,i));    //下面给先给ctr赋值
   cout<<"The current multimap's length is: ";
   cout<<ctr.size()<<endl;
   return 0;
}
