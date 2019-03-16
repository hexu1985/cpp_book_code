/*************************************************************************
程序编号：7-1-10
程序功能说明：用mismatch对比两容器相应两元素是否不等或者不满足给定条件。
pair的结构为:pair<vector<int>::interator,vector<int>interator> result
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
  int a[6]={100,80,70,50,50,10};
  int b[6]={90,70,60,40,40,0};
  vector<int> vec1(a,a+6);
  vector<int> vec2(a,a+6);
  vector<int> vec3(b,b+6);
  vector<int>::iterator iter1,iter2,iter3;   
  pair<vector<int>::iterator,vector<int>::iterator> result;
 
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

  result=mismatch(vec1.begin(),vec1.end(),vec2.begin());//对比数组1与2相应元素是否相等
  if(result.first==vec1.end())
 	  cout<<"There is no difference between vec1 and vec2!"<<endl;
  else
	  cout<<"vec1 and vec2 are different!"<<endl;
  result=mismatch(vec1.begin(),vec1.end(),vec3.begin(),compare);//对比数组1与3相应元素是否差10
  if(result.first==vec1.end())
 	  cout<<"vec1 and vec3 is no difference under compare"<<endl;
  else
 	  cout<<"vec1 and vec3 are different under compare!"<<endl;
} 
