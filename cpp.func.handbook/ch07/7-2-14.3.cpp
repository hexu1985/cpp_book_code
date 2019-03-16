/*************************************************************************
程序编号：7-2-14.3
程序功能说明：使用swap_ranges互换两个数组的内容。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void display(vector<int> vec)
{
	vector<int>::iterator iter;
	for(iter=vec.begin();iter!=vec.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
}

void main()
{
  vector<int> vec1(10);
  vector<int> vec2(10);
    
  vec1.clear();
  vec2.clear();
  for(int i=0;i<10;++i)
  {
	  vec1.push_back(10*i+1);
	  vec2.push_back(20*i+1);
  } 
  random_shuffle(vec1.begin(),vec1.end());//打乱须序
  random_shuffle(vec2.begin(),vec2.end());//打乱须序

  cout<<"Before swap:\n";//交换前
  cout<<"vec1:";
  display(vec1);
  cout<<"vec2:";
  display(vec2);
  swap_ranges(vec1.begin(),vec1.end(),vec2.begin());//交换
  cout<<"After swap:\n";//交换后
  cout<<"vec1:";
  display(vec1);
  cout<<"vec2:";
  display(vec2);
} 
