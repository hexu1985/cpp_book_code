#include <list>
#include <iostream>
using namespace std;

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
   list <int>::const_iterator cp;
   int i;
   for(i=0;i<3;i++)ctr.push_back(i);  //��ctr��ֵ
   cout<<"The ctr is: ";
   print(ctr);          //�����ӳ�������ӡctr������ 
   cout<<endl<<"The last element is: ";  
   cp=ctr.end();  //��cpָ�����һ��Ԫ�ص�λ��
   cp--;
   cout<<*cp<<endl;  //��ʾ���һ��Ԫ�صĽ��
   return 0;
}
