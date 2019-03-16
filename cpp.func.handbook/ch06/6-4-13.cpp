#include <set>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   multiset <int> ctr; 
   multiset <int>::size_type st;
   int i;
   for(i=0;i<len;i++)ctr.insert(i);    //ÏÈ¸øctr¸³Öµ
   cout<<"the max_size of ctr is:";
   st=ctr.max_size();
   cout<<st<<endl;
   return 0;
}
