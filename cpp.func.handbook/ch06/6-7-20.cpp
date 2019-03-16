#include <vector>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   vector <int> ctr(len);
   int i;
   for(i=0;i<len;i++)ctr[i]=i;    //下面给先给ctr赋值
   cout<<"The current vector's length is: ";
   cout<<ctr.size()<<endl;
   return 0;
}
