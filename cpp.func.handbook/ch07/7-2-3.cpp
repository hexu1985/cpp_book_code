/*************************************************************************
�����ţ�7-2-3
������˵����ʹ��fill���������
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
  
  cout<<"The vec before filled:"; 
  display(vec);//��ʾ����

fill(vec.begin(),vec.end(),9);//�������
  
  cout<<"The vec after filled: ";
  display(vec);//��ʾ����
} 
