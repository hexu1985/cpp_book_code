/*************************************************************************
程序编号：7-2-12
程序功能说明：使用rotate_copy复制元素。
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
  for(int i=0;i<10;++i)
	  vec1.push_back(10*i+1);

  cout<<"The vec1:\n";
  display(vec1);//显示vec1数组
  
  cout<<"The vec2:\n";
  display(vec2);//显示vec2数组

  rotate_copy(vec1.begin(),vec1.begin()+5,vec1.end(),vec2.begin());//复制
  
  cout<<"After rotate_copy!\n";
  cout<<"The vec1:\n";
  display(vec1);//显示vec1数组
  
  cout<<"The vec2:\n";
  display(vec2);//显示vec2数组
} 
