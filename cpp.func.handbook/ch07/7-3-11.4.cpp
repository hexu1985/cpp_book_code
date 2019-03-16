/*************************************************************************
�����ţ�7-3-11.4
������˵����ʹ��partial_sort_copy�������е�Ԫ�ش�С����������С������Ƶ�
��һ�����С�
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

using namespace std;

void print(vector<int> vec)
{
	vector<int>::iterator iter;
	for(iter=vec.begin();iter!=vec.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
}

void main()
{
   int a[10]={1,3,2,7,4,5,10,11,15,8};
   int b[10]={20,25,30,35,40,45,50,55,60,65};
   vector<int> vec1(a,a+10);
   vector<int> vec2(b,b+10);

   cout<<"Before copy!\n";  
   cout<<"vec1:";
   print(vec1);
   cout<<"vec2:";
   print(vec2);

   partial_sort_copy(vec1.begin(),vec1.end(),vec2.begin(),vec2.begin()+4);//����������;
  
   cout<<"After copy!\n";
   cout<<"vec:"; 
   print(vec1);
   cout<<"vec:"; 
   print(vec2);
} 
