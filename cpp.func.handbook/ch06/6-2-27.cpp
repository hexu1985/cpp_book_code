#include <list>
#include <iostream>
using namespace std;
#define len 5

int print(list <int> c)       //���ڴ�ӡһ��list
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
   ctr.push_back(1);
   ctr.push_back(1);
   ctr.push_back(2);
   ctr.push_back(3);
   ctr.push_back(3);
   ctr.push_back(3);
   ctr.push_back(4);

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"After using unique, ctr is:"; 
   ctr.unique();
   print(ctr);               //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   return 0;
}
