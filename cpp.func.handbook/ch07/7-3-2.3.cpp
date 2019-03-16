/*************************************************************************
�����ţ�7-3-2.3
������˵����ʹ��push_heap�ؽ��ѡ�
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
  int a[10]={1,3,5,10,11,12,16,5,7,8};
  vector<int> vec(a,a+10);
  
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());
   
  make_heap(vec.begin(),vec.end());//���н��Ѳ���  
 
  cout<<"After make_heap!"<<endl;
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());
  
  vec.push_back(20);
  push_heap(vec.begin(),vec.end());//ѹ����Ԫ�غ��ؽ���
  cout<<"After push_heap(20)!"<<endl;
  display(vec,vec.begin(),vec.end());
} 
