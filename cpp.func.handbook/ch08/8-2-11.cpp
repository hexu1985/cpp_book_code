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
   //寝化
   vector <int> v1(a,a+7);
   int total1,total2;
  
   cout <<"The vector v1=(" ;
   print(v1); //打印数组1
   cout <<")"<< endl;   

   //应用binder1st计算大于20的元素个数
   total1=count_if( v1.begin( ), v1.end( ), 
   binder1st<less<int> >(less<int>( ),20 ) );
  
   //显示结果
   cout<<"The number of elements in v1 greater than 20 is: "
       <<total1<<endl;  

   //应用not1及binder1st计算小于20的元素个数
   total2=count_if( v1.begin( ), v1.end( ), 
   not1(binder1st<less<int> >(less<int>( ),20 )) );

   //显示结果
   cout<<"The number of elements in v1 less than 20 is: "
       <<total2<<endl; 

   return 1;
}
