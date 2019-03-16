/*************************************************************************
程序编号：7-2-9.3
程序功能说明：使用remove_copy将容器1除值为51的元素复制到2中。
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

  remove_copy(vec1.begin(),vec1.end(),vec2.begin(),51);//复制
  
  cout<<"After remove_copy!\nThe vec2:\n";
  display(vec2);//显示vec2数组
} 
