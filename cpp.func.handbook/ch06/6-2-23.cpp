#include <list>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   list <int> ctr;
   int i;
   for(i=0;i<len;i++)ctr.push_back(i);    //下面给先给ctr赋值
   cout<<"The current list's length is: ";
   cout<<ctr.size()<<endl;
   return 0;
}
