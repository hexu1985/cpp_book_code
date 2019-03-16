#include <set>
#include <iostream>

using namespace std;

int print(multiset <int> c)       //���ڴ�ӡһ��multiset
{
    multiset <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   multiset <int> ctr1, ctr2;
   multiset <int>::const_iterator cp;
   
   int i;
   for(i=0;i<3;i++)     //������ȸ�ctr1��ctr2��ֵ
   {
	   ctr1.insert(i);
	   ctr2.insert(i+10); 
   }

   cout<<"Before exchange with ctr2 the ctr1 is:";
   print(ctr1);                        //�����ӳ��򣬰�ctr2��ӡ����
   cout<<endl;
   
   cout<<"After exchange with ctr2 the ctr1 is:";   
   ctr1.swap(ctr2);          //��ctr1��������ctr2����
   print(ctr1);               //�����ӳ��򣬰�ctr1��ӡ����
   cout<<endl;

   return 0;
}
