#include <vector>
#include <iostream>
using namespace std;

int print(vector <int> c)       //���ڴ�ӡһ��vector����
{
  vector <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   vector <int> ctr(3);
   vector <int>::const_iterator cp;
   int i;
   for(i=0;i<3;i++)ctr[i]=i;  //��ctr��ֵ
   cout<<"The ctr is: ";
   print(ctr);          //�����ӳ�������ӡctr������ 
   cout<<endl<<"The last element is: ";  
   cp=ctr.end()-1;  //��cpָ�����һ��Ԫ�ص�λ��
   cout<<*cp<<endl;  //��ʾ���һ��Ԫ�صĽ��
   return 0;
}
