/*************************************************************************
程序编号：7-2-3-4
程序功能说明：使用lexicographical_compare比较两个序列的元素是否相同。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void display(vector<int> vec,
			 vector<int>::iterator begin,
			 vector<int>::iterator end)
{
	vector<int>::iterator iter;
	for(iter=begin;iter!=end;++iter)
		cout<<*iter<<" ";
	cout<<endl;
}

void main()
{
  int a[10]={1,3,5,10,11,12,4,6,7,8};
  int b[10]={1,3,5,10,11,8,6,0,14,2};
  vector<int> vec1(a,a+10);
  vector<int> vec2(b,b+10);
  vector<int> vec3(a,a+5);
  vector<int> vec4(b,b+6);
  bool equal;

  cout<<"vec1:";
  display(vec1,vec1.begin(),vec1.end());
  cout<<"vec2:";
  display(vec2,vec2.begin(),vec2.end());
  cout<<"vec3:";
  display(vec3,vec3.begin(),vec3.end());
  cout<<"vec4:";
  display(vec4,vec4.begin(),vec4.end());
   
  equal=lexicographical_compare(vec1.begin(),vec1.end(),
vec2.begin(),vec2.end());
  if(equal)
	  cout<<"vec1==vec2 is true!"<<endl;
  else
	  cout<<"vec1==vec2 is false!"<<endl;

  equal=lexicographical_compare(vec3.begin(),vec3.end(),
vec4.begin(),vec4.end());
  if(equal)
	  cout<<"vec3==vec4 is true!"<<endl;
  else
	  cout<<"vec3==vec4 is false!"<<endl;
} 
