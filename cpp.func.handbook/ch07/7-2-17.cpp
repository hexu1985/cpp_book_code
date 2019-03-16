/*************************************************************************
�����ţ�7-2-17
������˵����ʹ��unique_copy����Ԫ�ء�
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
  int a[10]={5,1,5,5,2,3,5,5,5,4};
  vector<int> vec1(a,a+10);
  vector<int> vec2(10);
    
  cout<<"Before unique:\n";//����ǰ
  cout<<"vec1:";
  display(vec1,vec1.begin(),vec1.end());
  cout<<"vec2:";
  display(vec2,vec2.begin(),vec2.end());

  unique_copy(vec1.begin(),vec1.end(),vec2.begin());

  cout<<"After unique_copy:\n";//������
  cout<<"vec2:";
  display(vec2,vec2.begin(),vec2.end());
} 
