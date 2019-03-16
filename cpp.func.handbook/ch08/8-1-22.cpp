#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

template <class T> 
class cube: unary_function<T, T> 
{
public:
   result_type operator( ) ( argument_type e1)
   {
      return (result_type) (e1*e1*e1);//ʹ��unary_function����e1��3�η�
   }
};

template <class type>
void print(vector<type> vec)//��ӡ����
{
	vector<type>::iterator iter;
	for(iter=vec.begin();iter!=vec.end();++iter)
		cout<<*iter<<" ";
}

int main( )
{
   double a[7]={1.1,4.2,7.1,9.3,2.7,5.9,6.8};
   //��ʼ��
vector<double> v1(a,a+7);
   vector<double> v2(7);
   
   cout<<"Before transform!\n";
   cout<<"The vector v1=(";
   print(v1); //��ӡ����1
   cout<<")"<<endl;

   cout<<"The vector v2=(";
   print(v2); //��ӡ����2
   cout<<")"<<endl;
 
   transform (v1.begin( ),v1.end( ),v2.begin( ), 
      cube<double> ( ) );//�������ֵ�����������2��

   cout<<"After transform!\n";
   cout<<"The v2=(";
   cout<<"(";
   print(v2); //��ӡ����2
   cout<<")"<<endl;
   
   return 1;
}
