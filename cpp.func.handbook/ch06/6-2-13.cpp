#include <list>
#include <iostream>
using namespace std;

int print(list <int> c)       //���ڴ�ӡһ������
{
  list <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   list <int> ctr1, ctr2;
   list <int>::const_iterator cp;
   
   int i;
   for(i=0;i<3;i++)     //������ȸ�ctr1��ctr2��ֵ
   {
	   ctr1.push_back(i);
	   ctr2.push_back(i+10);
   }
   list <int> ctr3(ctr2);
   cout<<"Before assign both ctr2 and ctr3 are:";
   print(ctr2);                        //�����ӳ��򣬰�ctr2��ӡ����
   cout<<endl;
   
   cout<<"After merge with ctr1 ctr2 is:";   
   ctr2.merge(ctr1);          //��ctr1�����ݹ鲢��ctr2��
   print(ctr2);               //�����ӳ��򣬰�ctr2��ӡ����
   cout<<endl;

   cout<<"After merge with ctr1 by the greater comparison ctr3 is:";   
   ctr3.merge(ctr2,greater <int>());     //��ctr2����������ctr3�е�β��
   print(ctr3);               //�����ӳ��򣬰�ctr2��ӡ����
   cout<<endl;

   return 0;
}
