/*************************************************************************
�����ţ�7-2-6
������˵����ʹ��generate_n���������
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

  generate_n(vec.begin(),vec.size(),genby2);//�������
  
  cout<<"The vec after generated:";
  display(vec);//��ʾ����
} 
