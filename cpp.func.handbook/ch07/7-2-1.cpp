/*************************************************************************
程序编号：7-2-1
程序功能说明：使用copy复制元素。
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
  int a[7]={100,80,70,50,50,50,10};
  vector<int> vec1(a,a+7);
  vector<int> vec2(7);
  
  cout<<"The vec1: ";
  display(vec1);//显示数组1
  cout<<"The vec2: ";
  display(vec2);//显示数组2

  copy(vec1.begin(),vec1.end(),vec2.begin());//进行复制
  
  cout<<"After copy!\n";
  cout<<"The vec2: ";
  display(vec2);//显示数组2
} 
