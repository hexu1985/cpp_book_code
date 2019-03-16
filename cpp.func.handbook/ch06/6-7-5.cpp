#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr;
   ctr.push_back(1);          //将一个值为1的元素压进容器
   cout<<"The ctr's capacity is: "<<ctr.capacity()<<endl;
   ctr.push_back(2);           //将一个值为2的元素压进容器
   cout<<"Now the ctr's capacity is: "<<ctr.capacity()<<endl;
   return 0;
}
