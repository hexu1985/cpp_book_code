/*************************************************************************
程序编号：7-2-4
程序功能说明：使用fill_n填充容器。
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

   cout<<"The vec before filled:";
  display(vec);//显示数组

fill_n(vec.begin(),5,9);//对前面5个元素进行填充
  
  cout<<"The vec after filled: ";
  display(vec);//显示数组
} 
