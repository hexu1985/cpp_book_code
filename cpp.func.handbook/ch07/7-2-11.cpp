/*************************************************************************
程序编号：7-2-11
程序功能说明：使用rotate将容器以某元素为端点进行反转。
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

  cout<<"The vec:\n";
  display(vec);//显示vec1数组  
  rotate(vec.begin(),vec.begin()+5,vec.end());//反转  
  cout<<"After rotated!\nThe vec:\n";
  display(vec);//显示vec2数组
} 
