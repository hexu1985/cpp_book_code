/*************************************************************************
程序编号：7-2-8
程序功能说明：使用random_shuff将容器中的元素按随机数排列。
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
  vector<int> vec(10);
  
  vec.clear();
  for(int i=0;i<10;++i)
	  vec.push_back(10*i+1);
  
  random_shuffle(vec.begin(),vec.end());//按随机数排列
  cout<<"The orignal version of vector vec is:\n";
  display(vec);//显示vec数组  

  random_shuffle(vec.begin(),vec.end());//按随机数排列
  cout<<"Vector vec after one shuffle is:\n";
  display(vec);//显示vec数组

  random_shuffle(vec.begin(),vec.end());//按随机数排列
  cout<<"Vector vec after another shuffle is:\n";
  display(vec);//显示vec数组 
} 
