#include <map>
#include <iostream>

int main( ) 
{
   using namespace std;
   multimap <int,char> ctr;
   multimap <int,char>::iterator cp;
   ctr.insert(pair <int,char>(1,'a'));
   ctr.insert(pair <int,char>(2,'b'));
   cp=ctr.begin();       //定位到ctr的开始位置
   cout<<"The first element is:"<<cp->second<<endl;     //打印出第一个元素
   return 0;
}
