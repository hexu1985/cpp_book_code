#include <string>
#include <iostream>

int main( ) 
{
   using namespace std;
   string ctr("abc");
   basic_string <char>::iterator cp;
   cp=ctr.begin();       //定位到ctr的开始位置
   cout<<"The first element is:"<<*cp<<endl;     //打印出第一个元素
   return 0;
}
