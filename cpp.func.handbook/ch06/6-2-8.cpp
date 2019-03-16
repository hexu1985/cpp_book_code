#include <list>
#include <iostream>

int main( ) 
{
   using namespace std;
   list <char> ctr;
   ctr.push_back('a');
   ctr.push_back('b');
   char &i=ctr.front();       //定位到ctr的开始位置
   cout<<"The first element is:"<<i<<endl;     //打印出第一个元素
   return 0;
}
