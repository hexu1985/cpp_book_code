#include <list>
#include <iostream>
using namespace std;
#define len 5

int print(list <int> c)       //���ڴ�ӡһ������
{
    list <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   list <int> ctr;
   list <int>::iterator cp; 
   int i;
   for(i=0;i<len;i++)ctr.push_back(i);    //������ȸ�ctr��ֵ

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"After push_front the ctr is:"; 
   ctr.push_front(10);           //����һ���ص����ס�
   print(ctr);               //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   return 0;
}
