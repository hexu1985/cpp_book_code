#include <deque>
#include <iostream>
using namespace std;
#define len 5

int print(deque <int> c)       //���ڴ�ӡһ������
{
  deque <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   deque <int> ctr(len);
   deque <int>::iterator cp;
   
   int i;
   for(i=0;i<len;i++)ctr[i]=i;    //������ȸ�ctr��ֵ


   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"After erase the second element  ctr is:"; 
   cp=ctr.begin()+1;
   ctr.erase(cp);       //����ctr��cpλ�õ�Ԫ��
   print(ctr);               //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   return 0;
}
