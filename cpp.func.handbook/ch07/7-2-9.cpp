/*************************************************************************
程序编号：7-2-9.1
程序功能说明：使用remove删除容器中等于51的数。
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
  vector<int> vec1(9);
  vector<int>::iterator point;
  
  vec.clear();
  for(int i=0;i<10;++i)
	  vec.push_back(10*i+1);
  
  random_shuffle(vec.begin(),vec.end());//按随机数排列
  cout<<"The orignal version of vector vec is:\n";
  display(vec);//显示vec数组  

  point=remove(vec.begin(),vec.end(),51);//删除
  copy(vec.begin(),point,vec1.begin());//复制到另一数组中
  
  cout<<"Vector vec after remove 51:\n";
  display(vec1);//显示vec1数组
} 
