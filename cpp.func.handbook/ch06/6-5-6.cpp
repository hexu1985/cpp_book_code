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
   multiset <int> ctr;
   pair <multiset <int>::const_iterator, multiset <int>::const_iterator> p;
   int i;
   for(i=0;i<=3;i++)ctr.insert(i);  //��ctr��ֵ
   cout<<"The ctr is: ";
   print(ctr);          //�����ӳ�������ӡctr������ 
   cout<<endl;

   p=ctr.equal_range(2);
   if(p.first!=ctr.end())
   {
	   cout<<"The first element which key >= 2 is: ";
	   cout<<*p.first;             //�����ӳ�������ӡһ�
	   cout<<endl;
   }
   if(p.second!=ctr.end())
   {
	   cout<<"The first element which key > 2 is: ";
	   cout<<*p.second; 
	   cout<<endl;
   }
   return 0;
}
