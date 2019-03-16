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
   int a[7]={1,4,7,2,19,10,8};
   //初始化
vector <int> v(a,a+7);
   int total;
   
   cout <<"The vector v=(";
   print(v); //打印数组v
   cout <<")"<< endl;

   //使用unary_negate算出大于10的元素个数
   total=count_if( v.begin( ), v.end( ), 
      unary_negate<binder2nd <less<int> > >( bind2nd( less<int>( ),10 ) ) );

  
   cout<<"The number of elements in v not less than 10 is: "//显示结果
       <<total<<endl;

   return 1;
}
