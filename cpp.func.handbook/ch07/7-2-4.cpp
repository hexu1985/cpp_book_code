/*************************************************************************
�����ţ�7-2-4
������˵����ʹ��fill_n���������
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

fill_n(vec.begin(),5,9);//��ǰ��5��Ԫ�ؽ������
  
  cout<<"The vec after filled: ";
  display(vec);//��ʾ����
} 
