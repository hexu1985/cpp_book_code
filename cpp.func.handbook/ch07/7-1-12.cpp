/*************************************************************************
程序编号：7-1-12
程序功能说明：使用search_n寻找容器中连续n个相等的元素。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void main()
{
  int a[7]={100,80,70,50,50,50,10};
  vector<int> vec(a,a+7);
  vector<int>::iterator iter,result;
 
  cout<<"The elements of vec is:";//显示数组
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;

  result=search_n(vec.begin(),vec.end(),3,50);//找出连续3个相等的数
  if(result!=vec.end())
  {
	  cout<<"Find two adjacent elements that are equal!"<<endl;//找到，显示结果
	  cout<<"the position is:"<<result-vec.begin()<<endl;                    
  }
  else
	  cout<<"Failed to find 3 adjacent elements that are equal"<<endl;//查找失败
} 
