#include <vector>
#include <iostream>
using namespace std;
#define len 5

int print(vector <int> c)       //���ڴ�ӡһ��vector����
{
  vector <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   vector <int> ctr(len);
   int i;
   for(i=0;i<len;i++)ctr[i]=i;    //������ȸ�ctr��ֵ

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"After The first rsize the ctr is:";
   ctr.resize(7,10);               //�޸�vector�����Ĵ�С���¼ӵ���10����
   print(ctr);
   cout<<endl;

   cout<<"After The second rsize the ctr is:";
   ctr.resize(4);             //�޸�vector�����Ĵ�С��ɾ��vector�����ĺ�벿��
   print(ctr);
   cout<<endl;
   return 0;
}
