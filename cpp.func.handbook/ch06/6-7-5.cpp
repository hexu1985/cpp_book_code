#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr;
   ctr.push_back(1);          //��һ��ֵΪ1��Ԫ��ѹ������
   cout<<"The ctr's capacity is: "<<ctr.capacity()<<endl;
   ctr.push_back(2);           //��һ��ֵΪ2��Ԫ��ѹ������
   cout<<"Now the ctr's capacity is: "<<ctr.capacity()<<endl;
   return 0;
}
