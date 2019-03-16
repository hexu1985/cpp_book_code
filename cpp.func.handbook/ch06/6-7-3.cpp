#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr(2);
   ctr[0]='a';
   ctr[1]='b';
   char &ch=ctr.back();  //取得ctr最后一个元素的地址
   cout<<"The last element is:"<<ch<<endl;  //显示最后一元的地址。
   return 0;
}
