#include <vector>
#include <functional>
#include <algorithm>
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
   int a[7]={1,4,7,2,19,10,8};
   //��ʼ��
vector <int> v(a,a+7);
   int total;
   
   cout <<"The vector v=(";
   print(v); //��ӡ����v
   cout <<")"<< endl;

   //ʹ��unary_negate�������10��Ԫ�ظ���
   total=count_if( v.begin( ), v.end( ), 
      unary_negate<binder2nd <less<int> > >( bind2nd( less<int>( ),10 ) ) );

  
   cout<<"The number of elements in v not less than 10 is: "//��ʾ���
       <<total<<endl;

   return 1;
}
