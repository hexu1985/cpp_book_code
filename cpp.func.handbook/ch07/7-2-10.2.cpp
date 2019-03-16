/*************************************************************************
�����ţ�7-2-10.2
������˵����ʹ��replace_if��������С�ڵ���51�����滻��121��
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
  
  vec.clear();
  for(int i=0;i<10;++i)
	  vec.push_back(10*i+1);
  
  random_shuffle(vec.begin(),vec.end());//�����������
  cout<<"The orignal version of vector vec is:\n";
  display(vec);//��ʾvec���� 
  replace_if(vec.begin(),vec.end(),bind2nd(less_equal<int>(),51),121);// �滻
  cout<<"The vec after replaced:\n";//��ʾ�滻�������
  display(vec);
} 
