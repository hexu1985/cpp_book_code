#include <valarray>
#include <iostream>
#include <cmath>
using namespace std;
#define len 5

int print(valarray <double> val)  //���ӳ������ڴ�ӡһ��valarray����
{
	int i;
	for(i=0;i<len;i++)
		cout<<val[i]<<" ";
	return 0;
}

int main( )
{
  
   int i;
   valarray <double> val(len);
   valarray <double> val2;
   for(i=0;i<len;i++)       //�����val��ֵ
	   val[i]=i/10.0;

   cout<<"The val is: ";
   print(val);          //�����ӳ������ڴ�ӡval��
   cout<<endl;

   cout<<"The val2 is: ";
   val2=asin(val);
   print(val2);        //�����ӳ������ڴ�ӡval2��
   cout<<endl;

   return 0;
}
