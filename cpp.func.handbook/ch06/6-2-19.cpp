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
   list <int>::iterator cp; 
   list <int>::reverse_iterator rcp;
   int i;
   for(i=0;i<len;i++)ctr.push_back(i);    //������ȸ�ctr��ֵ
   ctr.push_back(2);
   ctr.push_back(3);

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"After remove the list with value 2,the list is:";
   ctr.remove(2);                   //ɾ��ֵΪ2����ЩԪ��
   print(ctr);                      //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   return 0;
}
