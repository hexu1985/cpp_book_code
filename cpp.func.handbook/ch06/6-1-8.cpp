#include <deque>
#include <iostream>
using namespace std;

int print(deque <int> c)       //���ڴ�ӡһ������
{
  deque <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   deque <int> ctr(3);
   deque <int>::const_iterator cp;
   int i;
   for(i=0;i<3;i++)ctr[i]=i;
   cout<<"The ctr is: ";
   print(ctr);
   cout<<endl<<"The last element is: ";
   cp=ctr.end()-1;
   cout<<*cp<<endl;
   return 0;
}
