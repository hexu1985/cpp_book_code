/*************************************************************************
�����ţ�7-1-9
������˵����ʹ��for_each������������Ԫ�ؽ��г�2��1�Ĳ�����
*************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void mul2add1(int &e)
{
	e=2*e+1;
}

void main()
{
  int a[6]={100,80,70,50,50,10};  
  vector<int> vec(a,a+6);  
  vector<int>::iterator iter;  
 
  cout<<"The elements of vec is:";//��ʾԭ����
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;

for_each(vec.begin(),vec.end(),mul2add1);//���г�2��1�Ĳ���
   cout<<"The elements of vec is:";//��ʾ�����������
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;
} 
