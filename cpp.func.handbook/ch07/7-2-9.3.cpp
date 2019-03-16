/*************************************************************************
�����ţ�7-2-9.3
������˵����ʹ��remove_copy������1��ֵΪ51��Ԫ�ظ��Ƶ�2�С�
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
  vector<int> vec1(10);
  vector<int> vec2(10);
    
  vec1.clear();
  for(int i=0;i<10;++i)
	  vec1.push_back(10*i+1);

  cout<<"The vec1:\n";
  display(vec1);//��ʾvec1����
  
  cout<<"The vec2:\n";
  display(vec2);//��ʾvec2����

  remove_copy(vec1.begin(),vec1.end(),vec2.begin(),51);//����
  
  cout<<"After remove_copy!\nThe vec2:\n";
  display(vec2);//��ʾvec2����
} 
