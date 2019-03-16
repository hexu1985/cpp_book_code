/*************************************************************************
程序编号：7-1-2
程序功能说明：使用count计算容器中值为50的元素个数。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void main()
{
  int a[6]={100,80,70,50,50,10};
  vector<int> vec(a,a+6);
  vector<int>::iterator iter;
  int result;
 
  cout<<"The elements of vec is:";//显示数组
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;

  result=count(vec.begin(),vec.end(),50);//找出等于50的元素个数
  cout<<"The number of 50s in vec is:"<<result<<endl;
} 
