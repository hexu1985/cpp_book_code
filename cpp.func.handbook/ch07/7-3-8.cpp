/*************************************************************************
�����ţ�7-3-8
������˵����ʹ��nth_element�������еĵ�4��Ԫ�ذ����ʵ���λ�ã�ʹ��Ԫ��
��ߵ�����Ԫ�ض��������ұߵ�Ԫ�ء�
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
   vector<int> vec(10);
   
   vec.clear();
   for(int i=0;i<10;++i)
	   vec.push_back(2*i+1);

   random_shuffle(vec.begin(),vec.end());//���Ҵ���

   cout<<"vec:";
   print(vec);

   cout<<"The element of position 4 is:"
	   <<*(vec.begin()+4)<<endl;

   nth_element(vec.begin(),vec.begin()+4,vec.end());//��������

   cout<<"After nth_element:\n";
   cout<<"vec:";
   print(vec);
} 
