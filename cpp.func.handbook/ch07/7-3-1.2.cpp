/*************************************************************************
�����ţ�7-3-1.2
������˵����ʹ��upper_boundѰ��ĳһ����ֵ������������Ӧ�ô���������Ԫ��֮�䡣
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void display(vector<int> vec,
			 vector<int>::iterator begin,
			 vector<int>::iterator end)
{
	vector<int>::iterator iter;
	for(iter=begin;iter!=end;++iter)
		cout<<*iter<<" ";
	cout<<endl;
}
void main()
{
  int a[10]={1,3,5,10,11,12,16,5,7,8};
  vector<int> vec(a,a+10);
  vector<int>::iterator iter1,iter2;
    
  cout<<"vec:";
  display(vec,vec.begin(),vec.end());
   
  iter1=lower_bound(vec.begin(),vec.end(),5);
  iter2=upper_bound(vec.begin(),vec.end(),5);//�ж�5Ӧ�ò�������������Ԫ��֮��
  cout<<"4 can be inserted after the poition:"<<iter1-vec.begin()<<endl;
  cout<<"4 can be inserted before the poition:"<<iter2-vec.begin()<<endl;
} 
