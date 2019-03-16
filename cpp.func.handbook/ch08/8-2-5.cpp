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
   int a[7]={5,8,2,20,4,69,2};
   int b[7]={2,3,10,6,11,69,23};
   //��ʼ�� 
vector<int> v1(a,a+7);
   vector<int> v2(b,b+7);
   vector<int> v3(7);
   
   cout<<"The vector v1=(";
   print(v1); //��ӡ����1
   cout<<")"<<endl;

   cout<<"The vector v2=(";
   print(v2); //��ӡ����2
   cout<<")"<<endl;
 
   transform (v1.begin( ),v1.end( ),v2.begin( ),v3.begin(), 
      greater_equal<int>( ));//�жϴ��ڻ��ߵ��ڣ�����������������3��

   cout<<"After transform!\n";
   cout<<"The v3=";
   cout<<"(";
   print(v3); //��ӡ����3
   cout<<")"<<endl;
   
   return 1;
}
