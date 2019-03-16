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
   //��ʼ��
vector <int> v1(a,a+7);
   int total;
  
   cout <<"The vector v1=(" ;
   print(v1); //��ӡ����1
   cout <<")"<< endl;   

   //Ӧ��bind1st�������20��Ԫ�ظ���
   total=count_if( v1.begin( ), v1.end( ), 
   bind1st(less<int>( ),20 ) );

   cout<<"The number of elements in v1 greater than 20 is: "//��ʾ������
       <<total<<endl;  

   return 1;
}
