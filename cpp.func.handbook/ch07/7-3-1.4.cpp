/*************************************************************************
�����ţ�7-3-1.4
������˵����ʹ��binary_search�ж��������Ƿ����ĳһԪ�ء�
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
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  vector<int> vec(a,a+10);
  bool found;
    
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());
 
  found=binary_search(vec.begin(),vec.end(),3);//�ж�3�Ƿ���������

  if(found)
	  cout<<"3 is in vector vec!"<<endl;
  else
	  cout<<"3 is not in vector vec!"<<endl;

  found=binary_search(vec.begin(),vec.end(),11);//�ж�11�Ƿ���������
  
  if(found)
	  cout<<"11 is in vector vec!"<<endl;
  else
	  cout<<"11 is not in vector vec!"<<endl;
} 
