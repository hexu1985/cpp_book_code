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
   valarray <double> val2(len);
   valarray <double> result;
   for(i=0;i<len;i++)       //�����val��ֵ
	   val[i]=i;
   for(i=0;i<len;i++)  //�����val2��ֵ
       val2[i]=10-i;

   cout<<"The val is: ";
   print(val);          //�����ӳ������ڴ�ӡval��
   cout<<endl;

   cout<<"The result is: ";
   result=pow(val,val2);
   print(result);        //�����ӳ������ڴ�ӡval2��
   cout<<endl;

   return 0;
}
