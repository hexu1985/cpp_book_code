#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

template <class type>
void print(vector<type> vec)//打印函数
{
	vector<type>::iterator iter;
	for(iter=vec.begin();iter!=vec.end();++iter)
		cout<<*iter<<" ";
}

int main( )
{
   int a[7]={5,8,10,20,49,69,2};
   int b[7]={2,3,10,6,11,69,23};
   //初始化
vector<int> v1(a,a+7);
   vector<int> v2(b,b+7);
   vector<int> v3(7);
   
   cout<<"The vector v1=(";
   print(v1); //打印数组1
   cout<<")"<<endl;

   cout<<"The vector v2=(";
   print(v2); //打印数组2
   cout<<")"<<endl;
 
   transform (v1.begin( ),v1.end( ),v2.begin( ),v3.begin(), 
      equal_to<int>( ));//是否相等，并将结果存放于数组3中

  cout<<"If v1(i)==v2(i) v3(i)=1!\n";//显示计算结果
   cout<<"The v3=";
   cout<<"(";
   print(v3); //打印数组3
   cout<<")"<<endl;
   
   return 1;
}
