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
   for(i=0;i<len;i++)ctr.push_back(len-i);    //������ȸ�ctr��ֵ

   cout<<"Befor sort, ctr = ";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"After sort, ctr = "; 
   ctr.sort();           //��ctr��Ԫ�صİ������˳����������
   print(ctr);               //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   return 0;
}
