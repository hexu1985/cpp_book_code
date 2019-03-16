#include <deque>
#include <iostream>

int main( ) 
{
   using namespace std;
   deque <char> ctr(2);
   ctr[0]='a';
   ctr[1]='b';
   char &i=ctr.front();       //定位到ctr的开始位置
   cout<<"The first element is:"<<i<<endl;     //打印出第一个元素
   return 0;
}
