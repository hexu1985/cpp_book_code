/*************************************************************************
程序编号：7-3-11.3
程序功能说明：使用partial_sort对容器中前部分的元素从小到大进行排列。
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
   int a[10]={1,2,3,4,7,5,10,11,15,8};
   
   vector<int> vec(a,a+10);
 
   cout<<"Before sort!\n";  
   cout<<"vec:";
   print(vec);
   
   partial_sort(vec.begin(),vec.begin()+7,vec.end());//进行排序;
  
   cout<<"After sort!\n";
   cout<<"vec:"; 
   print(vec);
} 
