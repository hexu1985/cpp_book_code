#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr(2);
   ctr[0]='a';
   ctr[1]='b';
   char &ch1=ctr.at(0);     //取得ctr的0位置的地址
   char &ch2=ctr.at(1);     //取得ctr的1位置的地址
   cout<<ch1<<endl;        //显示ch1的内容 
   cout<<ch2<<endl;    //显示ch2的内容
   return 0;
}
