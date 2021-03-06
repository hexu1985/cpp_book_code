/*************************************************************************
程序编号：7-3-10.4
程序功能说明：使用set_difference将属于第1个集合而不属于第2个集合的元素存
到另一容器中。
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
   int b[10]={2,5,7,15,33,16,6,19,17,9};
   vector<int> vec1(a,a+10);
   vector<int> vec2(b,b+10);
   vector<int> vec3(10);
     
   cout<<"vec1:";
   print(vec1);
   cout<<"vec2:";
   print(vec2);
   cout<<"vec3:";
   print(vec3);
 
   set_difference(vec1.begin(),vec1.end(),vec2.begin(),vec2.end(),vec3.begin());
  
   cout<<"After set_difference!\n";
   cout<<"vec3:"; 
   print(vec3);
}
