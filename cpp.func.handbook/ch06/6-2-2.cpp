#include <list>
#include <iostream>

int main( ) 
{
   using namespace std;
   list <char> ctr;
   ctr.push_back('a');
   ctr.push_back('b');
   char &ch=ctr.back();  //取得ctr最后一个元素的地址
   cout<<"The last element is:"<<ch<<endl;  //显示最后一元的地址。
   return 0;
}
