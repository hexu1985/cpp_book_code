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
   vector <int>::iterator cp; 
   vector <int>::reverse_iterator rcp;
   int i;
   for(i=0;i<len;i++)ctr[i]=i;    //������ȸ�ctr��ֵ

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"Its reverse is:";
   for(rcp=ctr.rbegin();rcp!=ctr.rend();rcp++)   //��ӡ������vector����
	   cout<<*rcp<<" ";
   cout<<endl;
   return 0;
}
