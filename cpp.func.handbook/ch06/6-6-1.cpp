#include <set>
#include <iostream>

int main( ) 
{
   using namespace std;
   set <char> ctr;
   set <char>::iterator cp;
   ctr.insert('a');
   ctr.insert('b');
   cp=ctr.begin();       //定位到ctr的开始位置
   cout<<"The first element is:"<<*cp<<endl;     //打印出第一个元素
   return 0;
}
