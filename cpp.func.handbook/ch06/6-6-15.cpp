#include <set>
#include <iostream>

using namespace std;

#define len 5

int print(set <int> c)       //���ڴ�ӡһ��set
{
    set <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   set <int> ctr;
   set <int>::iterator cp; 
   set <int>::reverse_iterator rcp;
   int i;
   for(i=0;i<len;i++)ctr.insert(i);    //������ȸ�ctr��ֵ

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"Its reverse is:";
   for(rcp=ctr.rbegin();rcp!=ctr.rend();rcp++)   //��ӡ������set����
	   cout<<*rcp<<" ";
   cout<<endl;
   return 0;
}
