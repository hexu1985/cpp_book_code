/*************************************************************************
�����ţ�7-2-1
������˵����ʹ��copy����Ԫ�ء�
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
  int a[7]={100,80,70,50,50,50,10};
  vector<int> vec1(a,a+7);
  vector<int> vec2(7);
  
  cout<<"The vec1: ";
  display(vec1);//��ʾ����1
  cout<<"The vec2: ";
  display(vec2);//��ʾ����2

  copy(vec1.begin(),vec1.end(),vec2.begin());//���и���
  
  cout<<"After copy!\n";
  cout<<"The vec2: ";
  display(vec2);//��ʾ����2
} 
