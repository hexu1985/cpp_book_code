#include <vector>
#include <iostream>
using namespace std;
#define len 5

int main( ) 
{
   vector <int> ctr;
   int i;
   for(i=0;i<len;i++)ctr.push_back(i);    //ÏÈ¸øctr¸³Öµ

   cout<<"Before reserve  the capacity of ctr is:"<<ctr.capacity()<<endl;
   ctr.reserve(15);
   cout<<"After reserve	the capacity of ctr is:"<<ctr.capacity()<<endl;
   return 0;
}
