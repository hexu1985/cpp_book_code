#include <list>
#include <iostream>

int main( ) 
{
   using namespace std;
   list <char> ctr;
   list <char>::iterator cp;
   ctr.push_back('a');
   ctr.push_back('b');
   cp=ctr.begin();       //定位到ctr的开始位置
   cout<<"The first element is:"<<*cp<<endl;     //打印出第一个元素
   return 0;
}
