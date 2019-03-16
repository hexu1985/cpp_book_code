/*************************************************************************
程序编号：7-4-2
程序功能说明：使用adjacent_difference计算容器相邻元素的差值并存放到另一容器中。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>
#include<numeric>

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
   int a[10]={20,26,30,39,40,44,50,51,60,68};
   vector<int> vec1(a,a+10);
   vector<int> vec2(10);   
  
   cout<<"vec1:";
   print(vec1);
   cout<<"vec2:";
   print(vec2);

   adjacent_difference(vec1.begin(),vec1.end(),vec2.begin());
   
   cout<<"After adjacent_difference!\n";
   cout<<"vec2:";
   print(vec2);     
} 
