#include <list>
#include <iostream>
using namespace std;

int print(list <char> c)       //���ڴ�ӡһ������
{
  list <char>::const_iterator cp;
  for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
  cout<<*cp<<" ";
	return 0;
}  

int main( ) 
{
   list <char> ctr(2,'a');    //����һ��������Ϊ��ĸΪ'a'��deque
   cout<<"The ctr is: ";     
   print(ctr);               //��ӡctr������ 
   cout<<endl;
   return 0;
}
