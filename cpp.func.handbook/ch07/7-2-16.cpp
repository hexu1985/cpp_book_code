/*************************************************************************
�����ţ�7-2-16
������˵����ʹ��uniqueɾ��Ԫ�ء�
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
  int a[10]={0,1,0,0,2,3,0,0,0,4};
  vector<int> vec(a,a+10);
  vector<int>::iterator point;  
  
  
  cout<<"Before unique:\n";//����ǰ
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());

  point=unique(vec.begin(),vec.end());//ɾ���ظ�Ԫ��

  cout<<"After unique:\n";//������
  cout<<"vec:";
  display(vec,vec.begin(),point);
} 
