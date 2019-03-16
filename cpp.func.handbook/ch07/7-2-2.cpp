/*************************************************************************
程序编号：7-2-2
程序功能说明：使用copy_backward复制元素。
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
  int a[7]={1,2,3,4,5,6,7};
  int b[7]={10,20,30,40,50,60,70};
  vector<int> vec1(a,a+7);
  vector<int> vec2(b,b+7);
   
  cout<<"The vec before copy: ";
  cout<<"vec1:";
  display(vec1);//显示数组1
  cout<<"vec2:";
  display(vec2);//显示数组2

  copy_backward(vec1.begin(),vec1.begin()+5,vec2.end());//进行复制
  
  cout<<"The vec after copy:";
  cout<<"vec1:";
  display(vec1);//显示数组1
  cout<<"vec2:";
  display(vec2);//显示数组2 
} 
