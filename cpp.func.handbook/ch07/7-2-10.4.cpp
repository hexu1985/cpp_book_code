/*************************************************************************
程序编号：7-10.4
程序功能说明：使用replace_copy_if将容器1的元素复制到2中。并将不大于51的
              元素的值替成121。
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

  replace_copy_if(vec1.begin(),vec1.end(),vec2.begin(),bind2nd(less_equal<int>(),51),121);//复制
  
  cout<<"After replace_copy_if!\nThe vec2:\n";
  display(vec2);//显示vec2数组
} 
