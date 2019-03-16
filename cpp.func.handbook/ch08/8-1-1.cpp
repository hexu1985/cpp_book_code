#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;

template <class T> class geom_average: 
binary_function<T, T, T> 
{
public:
   result_type operator( ) ( first_argument_type e1, 
                 second_argument_type e2 )
   {
      return (result_type) (sqrt(e1*e2));//����e1,e2�ļ���ƽ��ֵ
   }
};
template <class type>
void print(vector<type> vec)
{
	vector<type>::iterator iter;
	for(iter=vec.begin();iter!=vec.end();++iter)
		cout<<*iter<<" ";
}

int main( )
{
   double a[7]={1.1,4.2,7.1,9.3,2.7,5.9,6.8};
   double b[7]={3.3,1.3,5.7,9.0,8.1,10.2,4.5};
   vector<double> v1(a,a+7);
   vector<double> v2(b,b+7);
   vector<double> v3(7);
   
   cout<<"The vector v1=(";
   print(v1);//��ӡ����1
   cout<<")"<<endl;

   cout<<"The vector v2=(";
   print(v2); //��ӡ����2
   cout<<")"<<endl;
 
   transform (v1.begin( ),v1.end( ),v2.begin( ),v3.begin ( ), 
      geom_average<double>( ));//�������ƽ��ֵ

   cout<<"The element-wise geom_averages are(v3):\n";//��������������3��
   cout<<"(";
   print(v3); //��ӡ����3
   cout<<")"<<endl;
   
   return 1;
}
