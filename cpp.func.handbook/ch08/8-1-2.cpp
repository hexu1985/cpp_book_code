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
   vector <int> v1(a,a+7);
  
   cout <<"Original vector v1=(" ;
   print(v1);//打印数组1
   cout <<")"<< endl;
  
   // 按默认方式升序排列
   sort(v1.begin( ),v1.end( ));
   cout << "Sorted vector v1=(" ;
   print(v1);
   cout<<")"<< endl;

   //应用binary_negate反序排列
   sort( v1.begin( ), v1.end( ), 
   binary_negate<less<int> >(less<int>( ) ) );

   //显示结果于数组1中
   cout<<"Resorted vector v1=(";
   print(v1);
   cout<<")"<<endl;

   return 1;
}
