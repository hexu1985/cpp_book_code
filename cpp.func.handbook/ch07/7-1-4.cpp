/*************************************************************************
程序编号：7-1-5
程序功能说明：使用find寻找容器中等于50和等于40的元素。
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
  vector<int>::iterator iter,result;
 
  cout<<"The elements of vec is:";//显示数组
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;

  result= find(vec.begin(),vec.end(),50);//找出等于50的元素
  if(result!=vec.end())
  {
	  cout<<"Find the elements!"<<endl;//找到，显示结果
	  cout<<"the position is:"<<result-vec.begin()<<endl;                    
  }
  else
	  cout<<"Failed to find the elements equal to 50 "<<endl;//查找失败

  result= find(vec.begin(),vec.end(),40);//找出等于40的元素
  if(result!=vec.end())
  {
	  cout<<"Find the elements !"<<endl;//找到，显示结果
	  cout<<"the position is:"<<result-vec.begin()<<endl;                    
  }
  else
	  cout<<"Failed to find the elements equal to 40 "<<endl;//查找失败
} 
