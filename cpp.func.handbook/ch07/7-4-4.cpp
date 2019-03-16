/*************************************************************************
�����ţ�7-4-4
������˵����ʹ��partial_sum��͡�
*************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>
#include<numeric>

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
   int a[10]={4,7,8,10,3};
   vector<int> vec1(a,a+5);
   vector<int> vec2(5);   
  
   cout<<"Before partial_sum!\n";
   cout<<"vec1:";
   print(vec1);
   cout<<"vec2:";
   print(vec2);  

   partial_sum(vec1.begin(),vec1.end(),vec2.begin()); //���ۼ�

   cout<<"After partial_sum!\n";
   cout<<"vec1:";
   print(vec1);
   cout<<"vec2:";
   print(vec2); 

   partial_sum(vec1.begin(),vec1.end(),vec2.begin(),multiplies<int>());//���۳� 

   cout<<"After another partial_sum!\n";
   cout<<"vec1:";
   print(vec1);
   cout<<"vec2:";
   print(vec2); 
} 
