/*************************************************************************
程序编号：7-1-7
程序功能说明：使用find_first_of 寻找两容器之间是否含有相等或者
满足给定条件的子序列。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

bool compare(int e1,int e2)
{
	int e3=e1-e2;
	return e3==10;
}

void main()
{
  int a[9]={100,80,70,50,50,10,50,50,10};
  int b[6]={90,70,60,40,40,0};
  vector<int> vec1(a,a+9);
  vector<int> vec2(a+3,a+6);
  vector<int> vec3(b+3,b+6);
  vector<int>::iterator iter1,iter2,iter3,result;  
 
  cout<<"The elements of vec1 is:";//显示数组1
  for(iter1=vec1.begin();iter1!=vec1.end();++iter1)
	  cout<<*iter1<<" ";
  cout<<endl;

  cout<<"The elements of vec2 is:";//显示数组2
  for(iter2=vec2.begin();iter2!=vec2.end();++iter2)
	  cout<<*iter2<<" ";
  cout<<endl;

  cout<<"The elements of vec3 is:";//显示数组3
  for(iter3=vec3.begin();iter3!=vec3.end();++iter3)
	  cout<<*iter3<<" ";
  cout<<endl;

  result=find_first_of(vec1.begin(),vec1.end(),vec2.begin(),vec2.end());//数组1是否有子序列为数组2
  if(result!=vec1.end())
 	{
 cout<<"The vec2 is a part of vec1!"<<endl;
 cout<<"And the position is: "<<result-vec1.begin()<<endl;
}
  else
	{
  cout<<"The vec2 is not a part of vec1!"<<endl;
}

  result=find_first_of(vec1.begin(),vec1.end(),vec3.begin(),vec3.end(),compare);// 数组1是否有子序列与数组3满足一定条件

  if(result!=vec1.end())
  {
	  cout<<"There is a sequence of elements in vec1 that are\n";
	  cout<<" equivalent to those in vec3 under the compare!"<<endl;
    cout<<"And the position is: "<<result-vec1.begin()<<endl;
  }
  else
  {
	  cout<<"There is not a sequence of elements in vec1 that are";
	  cout<<" equivalent to those in vec3 under the compare!"<<endl;
  }
}  
