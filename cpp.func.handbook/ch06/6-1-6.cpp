#include <deque>
#include <iostream>
using namespace std;

int print(deque <char> c)       //���ڴ�ӡһ������
{
  deque <char>::const_iterator cp;
  for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
  cout<<*cp<<" ";
	return 0;
}  

int main( ) 
{
   deque <char> ctr(2,'a');
   cout<<"The ctr is: ";
   print(ctr);
   cout<<endl;
   return 0;
}