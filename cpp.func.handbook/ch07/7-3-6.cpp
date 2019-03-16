/*************************************************************************
程序编号：7-3-6
程序功能说明：使用min,max,min_element,max_element。
 *************************************************************************/
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
  vector<int> vec(10);
  vector<int>::iterator min_point,max_point;
  int x=1000,y=999;
  int min_value,max_value;

  cout<<"x="<<x<<endl;
  cout<<"y="<<y<<endl;
 
  min_value=min(x,y);
  max_value=max(x,y);

  cout<<"The minimum is:"<<min_value<<endl;
  cout<<"The maximum is:"<<max_value<<endl;

  vec.clear(); 
  for(int i=0;i<5;i++)
  {
	  vec.push_back(10*i+1);      
  }
  
  random_shuffle(vec.begin(),vec.end());//打乱次序
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());
 
  min_point=min_element(vec.begin(),vec.end());//找出最小
  max_point=max_element(vec.begin(),vec.end());//找出最大
  
  cout<<"The minimum in vector vec is:"<<*min_point<<endl;
  cout<<"The maximum in vector vec is:"<<*max_point<<endl;
 } 
