/*************************************************************************
�����ţ�7-1-10
������˵������mismatch�Ա���������Ӧ��Ԫ���Ƿ񲻵Ȼ��߲��������������
pair�ĽṹΪ:pair<vector<int>::interator,vector<int>interator> result
*************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>
using namespace std;
bool compare(int e1,int e2)
{
	int e3=e1-e2;
	return e3==10;
}
void main()
{
  int a[6]={100,80,70,50,50,10};
  int b[6]={90,70,60,40,40,0};
  vector<int> vec1(a,a+6);
  vector<int> vec2(a,a+6);
  vector<int> vec3(b,b+6);
  vector<int>::iterator iter1,iter2,iter3;   
  pair<vector<int>::iterator,vector<int>::iterator> result;
 
  cout<<"The elements of vec1 is:";//��ʾ����1
  for(iter1=vec1.begin();iter1!=vec1.end();++iter1)
	  cout<<*iter1<<" ";
  cout<<endl;

  cout<<"The elements of vec2 is:";//��ʾ����2
  for(iter2=vec2.begin();iter2!=vec2.end();++iter2)
	  cout<<*iter2<<" ";
  cout<<endl;

  cout<<"The elements of vec3 is:";//��ʾ����3
  for(iter3=vec3.begin();iter3!=vec3.end();++iter3)
	  cout<<*iter3<<" ";
  cout<<endl;

  result=mismatch(vec1.begin(),vec1.end(),vec2.begin());//�Ա�����1��2��ӦԪ���Ƿ����
  if(result.first==vec1.end())
 	  cout<<"There is no difference between vec1 and vec2!"<<endl;
  else
	  cout<<"vec1 and vec2 are different!"<<endl;
  result=mismatch(vec1.begin(),vec1.end(),vec3.begin(),compare);//�Ա�����1��3��ӦԪ���Ƿ��10
  if(result.first==vec1.end())
 	  cout<<"vec1 and vec3 is no difference under compare"<<endl;
  else
 	  cout<<"vec1 and vec3 are different under compare!"<<endl;
} 
