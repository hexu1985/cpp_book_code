#include <set>
#include <iostream>
#define len 5

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
   multiset <int>::iterator cp; 
   multiset <int>::reverse_iterator rcp;
   int i;
   for(i=0;i<len;i++)ctr.insert(i);    //������ȸ�ctr��ֵ

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"Its reverse is:";
   for(rcp=ctr.rbegin();rcp!=ctr.rend();rcp++)   //��ӡ������multiset����
	   cout<<*rcp<<" ";
   cout<<endl;
   return 0;
}
