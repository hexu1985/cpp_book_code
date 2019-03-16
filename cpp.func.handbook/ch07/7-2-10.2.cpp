/*************************************************************************
程序编号：7-2-10.2
程序功能说明：使用replace_if将容器中小于等于51的数替换成121。
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
  replace_if(vec.begin(),vec.end(),bind2nd(less_equal<int>(),51),121);// 替换
  cout<<"The vec after replaced:\n";//显示替换后的数组
  display(vec);
} 
