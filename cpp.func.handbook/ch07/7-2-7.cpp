/*************************************************************************
�����ţ�7-2-7
������˵����ʹ��partition�������д���50�ķ�Ϊһ�飬
С��50�ķ�Ϊ��һ�顣
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

bool greater50(int e)
{
	return e>50;
}

void main()
{
  vector<int> vec(10);
  vector<int> vec1(10),vec2(10);
  vector<int>::iterator point;

  vec.clear();
  for(int i=0;i<10;++i)
	  vec.push_back(10*i+1);
  
  cout<<"The vector before partitioned:\n";
  cout<<"The vec:";
  display(vec);//��ʾvec����
  cout<<"The vec1:";
  display(vec1);//��ʾvec1����
  cout<<"The vec2:";
  display(vec2);//��ʾvec2����

  point=partition(vec.begin(),vec.end(),greater50);//���зָ�
  
  copy(vec.begin(),point,vec1.begin());
  copy(point,vec.end(),vec2.begin());

  cout<<"The vec after partitioned:\n";
  cout<<"The first part:";
  display(vec1);//��ʾ����
  cout<<"The second part:";
  display(vec2);
} 
