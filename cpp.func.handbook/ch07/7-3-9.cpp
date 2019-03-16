/*************************************************************************
程序编号：7-3-9
程序功能说明：使用pre_permutation找出上一个排序方式。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void print(vector<int> vec)
{
	vector<int>::iterator iter;
	for(iter=vec.begin();iter!=vec.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
}

void main()
{
   vector<int> vec(5);
   
   vec.clear();
   for(int i=0;i<5;++i)
	   vec.push_back(2*i+1);

   cout<<"vec:";
   print(vec);

   prev_permutation(vec.begin(),vec.end());//上一个排序方式
   cout<<"after first next_permutation:\n";
   print(vec);

   prev_permutation(vec.begin(),vec.end());//上一个排序方式
   cout<<"after another next_permutation:\n";
   print(vec);

   prev_permutation(vec.begin(),vec.end());//上一个排序方式
   cout<<"after another next_permutation:\n";
   print(vec);

   prev_permutation(vec.begin(),vec.end());//上一个排序方式
   cout<<"after another next_permutation:\n";
   print(vec);
} 
