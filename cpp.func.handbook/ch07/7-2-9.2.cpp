/*************************************************************************
程序编号：7-2-9.2
程序功能说明：使用remove_if删除容器中小于等于51的数。
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
  vector<int>::iterator iter,point;
  
  vec.clear();
  for(int i=0;i<10;++i)
	  vec.push_back(10*i+1);
  
  random_shuffle(vec.begin(),vec.end());//按随机数排列
  cout<<"The orignal version of vector vec is:\n";
  display(vec);//显示vec数组  

  point=remove_if(vec.begin(),vec.end(),bind2nd(less_equal<int>(),51));//删除
  cout<<"The vec after removed:\n";//显示删除后的数组
  for(iter=vec.begin();iter!=point;iter++)
            cout<<*iter<<" ";
 cout<<endl;
} 
