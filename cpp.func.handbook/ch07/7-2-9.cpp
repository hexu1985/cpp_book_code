/*************************************************************************
�����ţ�7-2-9.1
������˵����ʹ��removeɾ�������е���51������
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

void main()
{
  vector<int> vec(10);
  vector<int> vec1(9);
  vector<int>::iterator point;
  
  vec.clear();
  for(int i=0;i<10;++i)
	  vec.push_back(10*i+1);
  
  random_shuffle(vec.begin(),vec.end());//�����������
  cout<<"The orignal version of vector vec is:\n";
  display(vec);//��ʾvec����  

  point=remove(vec.begin(),vec.end(),51);//ɾ��
  copy(vec.begin(),point,vec1.begin());//���Ƶ���һ������
  
  cout<<"Vector vec after remove 51:\n";
  display(vec1);//��ʾvec1����
} 
