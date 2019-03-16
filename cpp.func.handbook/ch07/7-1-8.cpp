/*************************************************************************
程序编号：7-1-8
程序功能说明：使用find_if寻找容器大于50的元素。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>
using namespace std;

bool greater50(int e)
{
	return e>50;
}

bool less10(int e)
{
	return e<10;
}

void main()
{
  int a[6]={100,80,70,50,50,10};
  
  vector<int> vec(a,a+6);  
  vector<int>::iterator iter,result;  
 
  cout<<"The elements of vec is:";//显示数组1
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;
  
  result=find_if(vec.begin(),vec.end(),greater50);//查找是否有大于50的元素
  if(result!=vec.end())
 	  cout<<"The vector vec has element greater than 50!"<<endl;
  else
	  cout<<"The vector vec has no element greater than 50!"<<endl;

  result=find_if(vec.begin(),vec.end(),less10);//查找是否有小于10的元素
  if(result!=vec.end())
 	  cout<<"The vector vec has element less than 10!"<<endl;
  else
	  cout<<"The vector vec has no element less than 10!"<<endl;
}
