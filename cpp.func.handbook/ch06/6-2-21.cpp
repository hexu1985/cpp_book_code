#include <list>
#include <iostream>
using namespace std;
#define len 5

int print(list <int> c)       //���ڴ�ӡһ��list����
{
  list <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   list <int> ctr;
   int i;
   for(i=0;i<len;i++)ctr.push_back(i);    //������ȸ�ctr��ֵ

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"After The first rsize the ctr is:";
   ctr.resize(7,10);               //�޸�list�����Ĵ�С���¼ӵ���10����
   print(ctr);
   cout<<endl;

   cout<<"After The second rsize the ctr is:";
   ctr.resize(4);             //�޸�list�����Ĵ�С��ɾ��list�����ĺ�벿��
   print(ctr);
   cout<<endl;
   return 0;
}
