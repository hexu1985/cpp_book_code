/*************************************************************************
程序编号：7-1-9
程序功能说明：使用for_each对容器中所有元素进行乘2加1的操作。
*************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void mul2add1(int &e)
{
	e=2*e+1;
}

void main()
{
  int a[6]={100,80,70,50,50,10};  
  vector<int> vec(a,a+6);  
  vector<int>::iterator iter;  
 
  cout<<"The elements of vec is:";//显示原数组
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;

for_each(vec.begin(),vec.end(),mul2add1);//进行乘2加1的操作
   cout<<"The elements of vec is:";//显示操作后的数组
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;
} 
