#include <set>
#include <iostream>
using namespace std;

int print(set <int> c)       //���ڴ�ӡһ��set
{
    set <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   set <int> ctr1;    //����һ��������Ϊ��ĸΪ'a'��set
   int i;
   for(i=0;i<=3;i++)ctr1.insert(i);  //��ctr1��ֵ  

   set <int> ctr2(ctr1);         //����һ����ctr1��ͬ��set����
   cout<<"The ctr2 is: ";     
   print(ctr2);               //��ӡctr2������ 
   cout<<endl;
   return 0;
}
