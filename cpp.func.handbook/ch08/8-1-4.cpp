#include <vector>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <iostream>

using namespace std;

template <class type>
void print(vector<type> vec)//��ӡ����
{
	vector<type>::iterator iter;
	for(iter=vec.begin();iter!=vec.end();++iter)
		cout<<*iter<<" ";
}

int main( )
{
   int a[7]={39,34,33,10,14,76,11};
   vector <int> v1(a,a+7);//��ʼ��
   int total1,total2;
  
   cout <<"The vector v1=(" ;
   print(v1);//��ӡ����1
   cout <<")"<< endl;   

   //Ӧ��binder1st�󶨵�һ������
   total1=count_if( v1.begin( ), v1.end( ), 
   binder1st<less<int> >(less<int>( ),20 ) );

   cout<<"The number of elements in v1 greater than 20 is: "//����20��Ԫ�ظ���
       <<total1<<endl;  

   //Ӧ��binder2nd�󶨵ڶ�������
   total2=count_if( v1.begin( ), v1.end( ), 
   binder2nd<less<int> >(less<int>( ),20 ) );

   cout<<"The number of elements in v1 less than 20 is: "//С��20��Ԫ�ظ���
       <<total2<<endl; 

   return 1;
}
