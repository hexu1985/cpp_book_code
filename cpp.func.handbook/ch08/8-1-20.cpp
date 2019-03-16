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
   //初始化 
vector<int> v1(a,a+7);
   vector<int> v2(7);
   
   cout<<"The vector v1=(";
   print(v1); //打印数组1
   cout<<")"<<endl;

   cout<<"The vector v2=(";
   print(v2); //打印数组2
   cout<<")"<<endl;
 
   transform (v1.begin( ),v1.end( ),v2.begin( ), 
      negate<int>( ));//算出相反数并存放于数组2中

   cout<<"After Transform!\n";
   cout<<"The v2=";
   cout<<"(";
   print(v2); //打印数组2
   cout<<")"<<endl;
   
   return 1;
}
