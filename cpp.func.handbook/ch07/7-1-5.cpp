/*************************************************************************
�����ţ�7-1-5
������˵����ʹ��findѰ�������е���50�͵���40��Ԫ�ء�
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
  vector<int>::iterator iter,result;
 
  cout<<"The elements of vec is:";//��ʾ����
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;

  result= find(vec.begin(),vec.end(),50);//�ҳ�����50��Ԫ��
  if(result!=vec.end())
  {
	  cout<<"Find the elements!"<<endl;//�ҵ�����ʾ���
	  cout<<"the position is:"<<result-vec.begin()<<endl;                    
  }
  else
	  cout<<"Failed to find the elements equal to 50 "<<endl;//����ʧ��

  result= find(vec.begin(),vec.end(),40);//�ҳ�����40��Ԫ��
  if(result!=vec.end())
  {
	  cout<<"Find the elements !"<<endl;//�ҵ�����ʾ���
	  cout<<"the position is:"<<result-vec.begin()<<endl;                    
  }
  else
	  cout<<"Failed to find the elements equal to 40 "<<endl;//����ʧ��
} 
