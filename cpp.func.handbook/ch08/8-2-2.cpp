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
   print(v1);
   cout <<")"<< endl;   

   //Ӧ��bind2nd����С��20��Ԫ�ظ���
   total=count_if( v1.begin( ), v1.end( ), 
   bind2nd(less<int>( ),20 ) );

   cout<<"The number of elements in v1 less than 20 is: "
       <<total<<endl;  //��ʾ���

   return 1;
}
