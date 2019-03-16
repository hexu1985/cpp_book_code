#include <set>
#include <iostream>
using namespace std;
#define len 5

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
   
   int i;
   for(i=0;i<len;i++)ctr.insert(i);    //������ȸ�ctr��ֵ

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   

   cp=ctr.find(2);         //����key=2��Ԫ��
   if(cp!=ctr.end())         //�ҵ�ʱ����ӡ����
   {
	   cout<<"The element whose key = 2 is:";
	   cout<<*cp;
	   cout<<endl;
   }
   else              //�Ҳ���ʱ
	   cout<<"There is no element whose key = 2"<<endl;
   return 0;
}
