#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr(2);
   vector <char>::iterator cp;
   ctr[0]='a';
   ctr[1]='b';
   cp=ctr.begin();       //定位到ctr的开始位置
   cout<<"The first element is:"<<*cp<<endl;     //打印出第一个元素
   return 0;
}
