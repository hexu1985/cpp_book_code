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
   int a[7]={1,0,1,1,9,0,2};
   int b[7]={2,0,1,0,0,1,0};
   vector<int> v1(a,a+7);
   vector<int> v2(b,b+7);
   vector<int> v3(7);
   
   cout<<"The vector v1=(";
   print(v1);//打印数组1
   cout<<")"<<endl;

   cout<<"The vector v2=(";
   print(v2);//打印数组2
   cout<<")"<<endl;
 
   transform (v1.begin( ),v1.end( ),v2.begin( ),v3.begin ( ), 
      logical_and<int>( ));//算出逻辑与并存放于数组3中
  
   cout<<"After logical_and!\n";
   cout<<"The v3=";
   cout<<"(";
   print(v3);//打印数组3
   cout<<")"<<endl;
   
   return 1;
}
