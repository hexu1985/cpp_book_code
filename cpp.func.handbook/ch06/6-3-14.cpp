#include <map>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   map <int,int> ctr; 
   map <int,int>::size_type st;
   int i;
   for(i=0;i<len;i++)ctr.insert(pair <int,int>(i,i));    //下面给先给ctr赋值
   cout<<"the max_size of ctr is:";
   st=ctr.max_size();
   cout<<st<<endl;
   return 0;
}
