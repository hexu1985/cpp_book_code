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
   list <int> ctr1,ctr2;
   list <int>::iterator cp;
   int i;
   for(i=0;i<len;i++)   //������ȸ�ctr1��ctr2��ֵ
   {
	   ctr1.push_back(i); 
       ctr2.push_back(i+10);
   }

   cout<<"Before splice from ctr2, ctr1 is: ";
   print(ctr1);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"After splice from ctr2, ctr1 is:  "; 
   cp=ctr1.begin();
   ctr1.splice(cp,ctr2);           //��ctr2���뵽ctr1��ǰ��
   print(ctr1);               //�����ӳ��򣬰�ctr1��ӡ����
   cout<<endl;
   return 0;
}
