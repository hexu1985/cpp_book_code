/*************************************************************************
程序编号：7-2-17
程序功能说明：使用unique_copy复制元素。
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
  int a[10]={5,1,5,5,2,3,5,5,5,4};
  vector<int> vec1(a,a+10);
  vector<int> vec2(10);
    
  cout<<"Before unique:\n";//操作前
  cout<<"vec1:";
  display(vec1,vec1.begin(),vec1.end());
  cout<<"vec2:";
  display(vec2,vec2.begin(),vec2.end());

  unique_copy(vec1.begin(),vec1.end(),vec2.begin());

  cout<<"After unique_copy:\n";//操作后
  cout<<"vec2:";
  display(vec2,vec2.begin(),vec2.end());
} 
