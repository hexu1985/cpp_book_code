/*************************************************************************
�����ţ�7-3-1.1
������˵����ʹ��lower_boundѰ��ĳһ����ֵ������������Ӧ�ý�����
����Ԫ��֮�䡣
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
  int a[10]={1,3,5,6,7,9,10,11,12,16};
  vector<int> vec(a,a+10);
  vector<int>::iterator iter;
    
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());
 
  iter=lower_bound(vec.begin(),vec.end(),4);//�ж�4Ӧ�ò��������ĸ�Ԫ��֮ǰ
  cout<<"4 can be inserted before the element:"<<*iter<<endl;

  iter=lower_bound(vec.begin(),vec.end(),13);//�ж�13Ӧ�ò��������ĸ�Ԫ��֮ǰ
  cout<<"13 can be inserted before the element:"<<*iter<<endl;
} 
