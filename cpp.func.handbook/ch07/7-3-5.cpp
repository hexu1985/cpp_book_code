/*************************************************************************
程序编号：7-3-5
程序功能说明：使用merge合并两个有序容器到另一容器中。
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
  vector<int> vec1(5);
  vector<int> vec2(5);
  vector<int> vec3(10);

  vec1.clear();
  vec2.clear();
  for(int i=0;i<5;i++)
  {
	  vec1.push_back(2*i+1);
      vec2.push_back(2*i);
  }
    
  cout<<"Before merge!\n";
  cout<<"vec1:";
  display(vec1,vec1.begin(),vec1.end());
  cout<<"vec2:";
  display(vec2,vec2.begin(),vec2.end());
  cout<<"vec3:";
  display(vec3,vec3.begin(),vec3.end());
   
  merge(vec1.begin(),vec1.end(),vec2.begin(),vec2.end(),vec3.begin());//合并

  cout<<"After merge!"<<endl;
  cout<<"vec1:";
  display(vec1,vec1.begin(),vec1.end());
  cout<<"vec2:";
  display(vec2,vec2.begin(),vec2.end());
  cout<<"vec3:";
  display(vec3,vec3.begin(),vec3.end());
} 
