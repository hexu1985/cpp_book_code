/*************************************************************************
程序编号：7-3-3
程序功能说明：使用inplace_merge合并两个有序子序列。
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
  int a[10]={1,3,5,10,11,12,4,6,7,8};
  vector<int> vec(a,a+10);
  
  cout<<"Before inplace_merge!\n";
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());
   
  inplace_merge(vec.begin(),vec.begin()+6,vec.end());

  cout<<"After inplace_merge!"<<endl;
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());
} 
