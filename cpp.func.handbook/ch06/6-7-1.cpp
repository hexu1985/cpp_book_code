#include <vector>
#include <iostream>
using namespace std;

int print(vector <int> c)       //���ڴ�ӡһ��deque����
{
    vector <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   vector <int> ctr1(3), ctr2(3);
   vector <int>::const_iterator cp;
   
   int i;
   for(i=0;i<3;i++)     //������ȸ�ctr1��ctr2��ֵ
   {
	   ctr1[i]=i;
	   ctr2[i]=i+10; 
   }

   cout<<"Before assign ctr2 is:";
   print(ctr2);                        //�����ӳ��򣬰�ctr2��ӡ����
   cout<<endl;
   
   cout<<"After the first assign ctr2 is:";   
   ctr2.assign(ctr1.begin(),ctr1.end());       //��ctr1����������ctr2��
   print(ctr2);               //�����ӳ��򣬰�ctr2��ӡ����
   cout<<endl;

   cout<<"After the second assign ctr2 is:";
   ctr2.assign(2,5);         //����ctr2Ϊ����Ԫ��Ϊ5
   print(ctr2);          //�����ӳ��򣬰�ctr2��ӡ����
   cout<<endl;
   return 0;
}
