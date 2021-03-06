#include <vector>
#include <algorithm>
#include <functional>
#include <cstdlib>
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
   int a[7]={39,34,33,10,14,76,11};
   //初始化
vector <int> v1(a,a+7);
   int total;
  
   cout <<"The vector v1=(" ;
   print(v1); //打印数组1
   cout <<")"<< endl;   

   //应用bind1st计算大于20的元素个数
   total=count_if( v1.begin( ), v1.end( ), 
   bind1st(less<int>( ),20 ) );

   cout<<"The number of elements in v1 greater than 20 is: "//显示计算结果
       <<total<<endl;  

   return 1;
}
