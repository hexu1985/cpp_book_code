/*************************************************************************
程序编号：7-2-16
程序功能说明：使用unique删除元素。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void display(vector<int> vec,
			 vector<int>::iterator begin,
			 vector<int>::iterator end)
{
	vector<int>::iterator iter;
	for(iter=begin;iter!=end;++iter)
		cout<<*iter<<" ";
	cout<<endl;
}

void main()
{
  int a[10]={0,1,0,0,2,3,0,0,0,4};
  vector<int> vec(a,a+10);
  vector<int>::iterator point;  
  
  
  cout<<"Before unique:\n";//操作前
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());

  point=unique(vec.begin(),vec.end());//删除重复元素

  cout<<"After unique:\n";//操作后
  cout<<"vec:";
  display(vec,vec.begin(),point);
} 
