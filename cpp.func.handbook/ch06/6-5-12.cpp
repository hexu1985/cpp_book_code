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
   multiset <int>::const_iterator cp;
   int i;
   for(i=0;i<=3;i++)ctr.insert((i,i));  //��ctr��ֵ
   cout<<"The ctr is: ";
   print(ctr);          //�����ӳ�������ӡctr������ 
   cout<<endl;

   cp=ctr.lower_bound(2);
   if(cp!=ctr.end())
   {
	   cout<<"The first element which key >= 2 is: ";
	   cout<<*cp;              //�����ӳ�������ӡһ�
	   cout<<endl;
   }
   return 0;
}
