#include <vector>
#include <iostream>
using namespace std;

int print(vector <char> c)       //���ڴ�ӡһ��vector����
{
  vector <char>::const_iterator cp;
  for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
  cout<<*cp<<" ";
	return 0;
}  

int main( ) 
{
   vector <char> ctr(2,'a');    //����һ��������Ϊ��ĸΪ'a'��vector
   cout<<"The ctr is: ";     
   print(ctr);               //��ӡctr������ 
   cout<<endl;
   return 0;
}
