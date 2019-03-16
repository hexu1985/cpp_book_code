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
   vector <int> v1(a,a+7);
  
   cout <<"Original vector v1=(" ;
   print(v1);//��ӡ����1
   cout <<")"<< endl;
  
   // ��Ĭ�Ϸ�ʽ��������
   sort(v1.begin( ),v1.end( ));
   cout << "Sorted vector v1=(" ;
   print(v1);
   cout<<")"<< endl;

   //Ӧ��binary_negate��������
   sort( v1.begin( ), v1.end( ), 
   binary_negate<less<int> >(less<int>( ) ) );

   //��ʾ���������1��
   cout<<"Resorted vector v1=(";
   print(v1);
   cout<<")"<<endl;

   return 1;
}
