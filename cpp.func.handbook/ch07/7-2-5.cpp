/*************************************************************************
�����ţ�7-2-5
������˵����ʹ��generate���������
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

int genby2()
{
	static int seed=1;
    return	seed+=2;
}

void main()
{
  vector<int> vec(10);
  
  cout<<"The vec before generated:";
  display(vec);//��ʾ����

  generate(vec.begin(),vec.end(),genby2);//�������
  
  cout<<"The vec after generated:";
  display(vec);//��ʾ����
} 
