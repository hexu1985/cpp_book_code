/*************************************************************************
�����ţ�7-1-3
������˵����ʹ��count_ifѰ�������д���50��Ԫ�ظ�����
*************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

bool compare(int e1)
{
	return (e1>50);
}

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
  
  result=count_if(vec.begin(),vec.end(),compare);//�ҳ�����50��Ԫ�ظ���
  cout<<"The number of elements in vec that greater than 50 is:"<<result<<endl;
}
