/*************************************************************************
�����ţ�7-4-3
������˵����ʹ��inner_product�����ڻ���
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
   int b[10]={1,3,2,7,4};
   vector<int> vec1(a,a+5);
   vector<int> vec2(b,b+5);
   int total;
   cout<<"vec1:";
   print(vec1);
   cout<<"vec2:";
   print(vec2);

   total=inner_product(vec1.begin(),vec1.end(),
	                   vec2.begin(),0); //�����������ڻ� 
   cout<<"The inner_product of vec1 and vec2 is:";
   cout<<total;
   cout<<endl;

   total=inner_product(vec1.begin(),vec1.end(),
	                  vec2.begin(),1,
					  multiplies<int>(),plus<int>()); //��ӦԪ����ͺ������ 
   cout<<"The value of (a1+b1)*(a2+b2)*... is:";
   cout<<total;
   cout<<endl;
} 
