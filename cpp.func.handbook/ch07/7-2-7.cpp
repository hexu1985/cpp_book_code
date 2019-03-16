/*************************************************************************
程序编号：7-2-7
程序功能说明：使用partition将容器中大于50的分为一组，
小于50的分为另一组。
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

bool greater50(int e)
{
	return e>50;
}

void main()
{
  vector<int> vec(10);
  vector<int> vec1(10),vec2(10);
  vector<int>::iterator point;

  vec.clear();
  for(int i=0;i<10;++i)
	  vec.push_back(10*i+1);
  
  cout<<"The vector before partitioned:\n";
  cout<<"The vec:";
  display(vec);//显示vec数组
  cout<<"The vec1:";
  display(vec1);//显示vec1数组
  cout<<"The vec2:";
  display(vec2);//显示vec2数组

  point=partition(vec.begin(),vec.end(),greater50);//进行分割
  
  copy(vec.begin(),point,vec1.begin());
  copy(point,vec.end(),vec2.begin());

  cout<<"The vec after partitioned:\n";
  cout<<"The first part:";
  display(vec1);//显示数组
  cout<<"The second part:";
  display(vec2);
} 
