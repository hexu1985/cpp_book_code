/*************************************************************************
程序编号：7-1-1
程序功能说明：使用adjacent_find寻找容器中相邻两元素X(n)，X(n+1)
且X(n)=X(n+1)及X(n)-X(n+1)=10。
 *************************************************************************/
#include<vector>
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

bool compare(int e1,int e2)
{
	int e3=e1-e2;
	return (e3==10);
}

void main()
{
  int a[6]={100,80,70,50,50,10};
  vector<int> vec(a,a+6);
  vector<int>::iterator iter,result;
 
  cout<<"The elements of vec is:";//显示数组
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;

  result=adjacent_find(vec.begin(),vec.end());//找出相邻相等的两个数
  if(result!=vec.end())
  {
	  cout<<"Find two adjacent elements that are equal!"<<endl;//找到，显示结果
	  cout<<"the value is:"<<*result<<endl;                    
  }
  else
	  cout<<"Failed to find two adjacent elements that are equal"<<endl;//查找失败

  result=adjacent_find(vec.begin(),vec.end(),compare);//找出相邻元素相差10的两个数
  if(result!=vec.end())
  {
      cout<<"Find two adjacent elements that satisfy the condition!"<<endl;
	  cout<<"the value is:"<<*result<<" "<<*(result++)<<endl;//找到，显示结果
  }
  else
      cout<<"Failed to find two adjacent elements satisfy the condition"<<endl;//失败
} 
