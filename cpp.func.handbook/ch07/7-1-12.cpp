/*************************************************************************
�����ţ�7-1-12
������˵����ʹ��search_nѰ������������n����ȵ�Ԫ�ء�
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void main()
{
  int a[7]={100,80,70,50,50,50,10};
  vector<int> vec(a,a+7);
  vector<int>::iterator iter,result;
 
  cout<<"The elements of vec is:";//��ʾ����
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;

  result=search_n(vec.begin(),vec.end(),3,50);//�ҳ�����3����ȵ���
  if(result!=vec.end())
  {
	  cout<<"Find two adjacent elements that are equal!"<<endl;//�ҵ�����ʾ���
	  cout<<"the position is:"<<result-vec.begin()<<endl;                    
  }
  else
	  cout<<"Failed to find 3 adjacent elements that are equal"<<endl;//����ʧ��
} 
