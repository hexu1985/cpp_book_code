/*************************************************************************
�����ţ�7-3-2.4
������˵����ʹ��pop_heapɾ����������������
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
  
  pop_heap(vec.begin(),vec.end());//ɾ�����Ԫ�غ�
  cout<<"After pop_heap!"<<endl;
  display(vec,vec.begin(),vec.end());

 pop_heap(vec.begin(),vec.end());//ɾ�����Ԫ�غ�
  cout<<"After pop_heap!"<<endl;
  display(vec,vec.begin(),vec.end());
} 
