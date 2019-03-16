/*************************************************************************
�����ţ�7-1-1
������˵����ʹ��adjacent_findѰ��������������Ԫ��X(n)��X(n+1)
��X(n)=X(n+1)��X(n)-X(n+1)=10��
 *************************************************************************/
#include<vector>
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

bool compare(int e1,int e2)
{
	int e3=e1-e2;
	return (e3==10);
}

void main()
{
  int a[6]={100,80,70,50,50,10};
  vector<int> vec(a,a+6);
  vector<int>::iterator iter,result;
 
  cout<<"The elements of vec is:";//��ʾ����
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;

  result=adjacent_find(vec.begin(),vec.end());//�ҳ�������ȵ�������
  if(result!=vec.end())
  {
	  cout<<"Find two adjacent elements that are equal!"<<endl;//�ҵ�����ʾ���
	  cout<<"the value is:"<<*result<<endl;                    
  }
  else
	  cout<<"Failed to find two adjacent elements that are equal"<<endl;//����ʧ��

  result=adjacent_find(vec.begin(),vec.end(),compare);//�ҳ�����Ԫ�����10��������
  if(result!=vec.end())
  {
      cout<<"Find two adjacent elements that satisfy the condition!"<<endl;
	  cout<<"the value is:"<<*result<<" "<<*(result++)<<endl;//�ҵ�����ʾ���
  }
  else
      cout<<"Failed to find two adjacent elements satisfy the condition"<<endl;//ʧ��
} 
