/*************************************************************************
�����ţ�7-2-11
������˵����ʹ��rotate��������ĳԪ��Ϊ�˵���з�ת��
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

  cout<<"The vec:\n";
  display(vec);//��ʾvec1����  
  rotate(vec.begin(),vec.begin()+5,vec.end());//��ת  
  cout<<"After rotated!\nThe vec:\n";
  display(vec);//��ʾvec2����
} 
