#include <map>
#include <iostream>
using namespace std;

int print(map <int,int> c)       //���ڴ�ӡһ��map
{
    map <int,int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    cout<<cp->second<<" ";
	return 0;
}

int main( ) 
{
   map <int,int> ctr;
   map <int,int>::const_iterator cp;
   int i;
   for(i=0;i<3;i++)ctr.insert(pair <int,int>(i,i));  //��ctr��ֵ
   cout<<"The ctr is: ";
   print(ctr);          //�����ӳ�������ӡctr������ 
   cout<<endl<<"The last element is: ";  
   cp=ctr.end();  //��cpָ�����һ��Ԫ�ص�λ��
   cp--;
   cout<<cp->second<<endl;  //��ʾ���һ��Ԫ�ص�ֵ
   return 0;
}
