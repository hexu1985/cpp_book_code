/*************************************************************************
�����ţ�7-2-9.2
������˵����ʹ��remove_ifɾ��������С�ڵ���51������
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
  vector<int>::iterator iter,point;
  
  vec.clear();
  for(int i=0;i<10;++i)
	  vec.push_back(10*i+1);
  
  random_shuffle(vec.begin(),vec.end());//�����������
  cout<<"The orignal version of vector vec is:\n";
  display(vec);//��ʾvec����  

  point=remove_if(vec.begin(),vec.end(),bind2nd(less_equal<int>(),51));//ɾ��
  cout<<"The vec after removed:\n";//��ʾɾ���������
  for(iter=vec.begin();iter!=point;iter++)
            cout<<*iter<<" ";
 cout<<endl;
} 
