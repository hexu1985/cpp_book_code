/*************************************************************************
程序编号：7-2-10.1
程序功能说明：使用replace将容器中等于51的数代换成121。
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

  replace(vec.begin(),vec.end(),51,121);//代换
    
  cout<<"Vector vec after replace:\n";
  display(vec);//显示vec数组
} 
