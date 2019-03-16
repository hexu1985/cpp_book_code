/*************************************************************************
程序编号：7-3-1.1
程序功能说明：使用lower_bound寻找某一给定值在有序容器中应该介于哪
两个元素之间。
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
  int a[10]={1,3,5,6,7,9,10,11,12,16};
  vector<int> vec(a,a+10);
  vector<int>::iterator iter;
    
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());
 
  iter=lower_bound(vec.begin(),vec.end(),4);//判断4应该插在数组哪个元素之前
  cout<<"4 can be inserted before the element:"<<*iter<<endl;

  iter=lower_bound(vec.begin(),vec.end(),13);//判断13应该插在数组哪个元素之前
  cout<<"13 can be inserted before the element:"<<*iter<<endl;
} 
