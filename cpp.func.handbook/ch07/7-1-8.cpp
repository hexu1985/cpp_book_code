/*************************************************************************
�����ţ�7-1-8
������˵����ʹ��find_ifѰ����������50��Ԫ�ء�
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>
using namespace std;

bool greater50(int e)
{
	return e>50;
}

bool less10(int e)
{
	return e<10;
}

void main()
{
  int a[6]={100,80,70,50,50,10};
  
  vector<int> vec(a,a+6);  
  vector<int>::iterator iter,result;  
 
  cout<<"The elements of vec is:";//��ʾ����1
  for(iter=vec.begin();iter!=vec.end();++iter)
	  cout<<*iter<<" ";
  cout<<endl;
  
  result=find_if(vec.begin(),vec.end(),greater50);//�����Ƿ��д���50��Ԫ��
  if(result!=vec.end())
 	  cout<<"The vector vec has element greater than 50!"<<endl;
  else
	  cout<<"The vector vec has no element greater than 50!"<<endl;

  result=find_if(vec.begin(),vec.end(),less10);//�����Ƿ���С��10��Ԫ��
  if(result!=vec.end())
 	  cout<<"The vector vec has element less than 10!"<<endl;
  else
	  cout<<"The vector vec has no element less than 10!"<<endl;
}
