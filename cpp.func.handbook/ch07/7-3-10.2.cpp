/*************************************************************************
程序编号：7-3-10.2
程序功能说明：使用set_union合并两个集合。
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
   vector<int> vec1(10);
   vector<int> vec2(5);
   vector<int> vec3(5);
    
   vec2.clear();
   vec3.clear();
   for(int i=0;i<5;++i)
   {
	   vec2.push_back(2*i+1);
	   vec3.push_back(2*i);
   }

   cout<<"vec1:";
   print(vec1);
   cout<<"vec2:";
   print(vec2);
   cout<<"vec3:";
   print(vec3);
 
   set_union(vec2.begin(),vec2.end(),vec3.begin(),vec3.end(),vec1.begin());

cout<<"After union!\n";
cout<<"vec1:";
   print(vec1);
} 
