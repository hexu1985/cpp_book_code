/*************************************************************************
�����ţ�7-2-15
������˵����ʹ��transform���������н��в�����
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void display(vector<int> vec)
{
	vector<int>::iterator iter;
	for(iter=vec.begin();iter!=vec.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
}

int doubleval(int e)
{
	return e+e;
}

int difference(int e1,int e2)
{
	return e2-e1+1;
}

void main()
{
  vector<int> vec1(10);
  vector<int> vec2(10);
  vector<int> vec3(10);
    
  vec1.clear();
  vec2.clear();
  for(int i=0;i<10;++i)
  {
	  vec1.push_back(10*i+1);
	  vec2.push_back(20*i+1);
  } 
  random_shuffle(vec1.begin(),vec1.end());//��������
  
  cout<<"Before transform:\n";//����ǰ
  cout<<"vec1:";
  display(vec1);
  cout<<"vec2:";
  display(vec2);
  cout<<"vec3:";
  display(vec3);

  transform(vec1.begin(),vec1.end(),vec2.begin(),doubleval);//������1��2����

  cout<<"After first transform:\n";//ʹ�õ�һ���汾��
  cout<<"vec1:";
  display(vec1);
  cout<<"vec2:";
  display(vec2);
  cout<<"vec3:";
  display(vec3);

  transform(vec1.begin(),vec1.end(),vec2.begin(),vec3.begin(),difference);//����2������1�ټ�1

  cout<<"After second transform:\n";//ʹ�õڶ����汾��
  cout<<"vec1:";
  display(vec1);
  cout<<"vec2:";
  display(vec2);
  cout<<"vec3:";
  display(vec3);
} 
