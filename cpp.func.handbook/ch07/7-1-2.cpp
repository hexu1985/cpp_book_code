/*************************************************************************
�����ţ�7-1-2
������˵����ʹ��count����������ֵΪ50��Ԫ�ظ�����
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void main()
{
  int a[6]={100,80,70,50,50,10};
  vector<int> vec(a,a+6);
  vector<int>::iterator iter;
  int result;
 
  cout<<"The elements of vec is:";//��ʾ����
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;

  result=count(vec.begin(),vec.end(),50);//�ҳ�����50��Ԫ�ظ���
  cout<<"The number of 50s in vec is:"<<result<<endl;
} 
