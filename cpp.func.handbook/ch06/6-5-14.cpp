#include <set>
#include <iostream>
using namespace std;

int print(multiset <int> c)       //���ڴ�ӡһ��multiset
{
    multiset <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   multiset <int> ctr1;    //����һ��������Ϊ��ĸΪ'a'��multiset
   int i;
   for(i=0;i<=3;i++)ctr1.insert(i);  //��ctr1��ֵ  

   multiset <int> ctr2(ctr1);         //����һ����ctr1��ͬ��multiset����
   cout<<"The ctr2 is: ";     
   print(ctr2);               //��ӡctr2������ 
   cout<<endl;
   return 0;
}
