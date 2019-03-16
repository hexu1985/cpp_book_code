/*************************************************************************
程序编号：7-3-10.1
程序功能说明：使用includes判断一序列是否包含另一序列 
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
   bool in;
   
   vec1.clear();
   for(int i=0;i<10;++i)
	   vec1.push_back(2*i+1);
   vec2.clear();
   vec3.clear();
   for(i=0;i<5;++i)
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
   in=includes(vec1.begin(),vec1.end(),vec2.begin(),vec2.end());  //判断 
   if(in)
	   cout<<"vec1 include vec2\n";
   else
	   cout<<"vec2 not include vec2\n";

   in=includes(vec1.begin(),vec1.end(),vec3.begin(),vec3.end());//判断

   if(in)
	   cout<<"vec1 include vec3\n";
   else
	   cout<<"vec2 not include vec3\n";
} 
