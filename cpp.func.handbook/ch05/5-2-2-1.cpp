#include <valarray>
#include <iostream>
using namespace std;
#define len 5

int print(valarray <int> val)  //���ӳ������ڴ�ӡһ��valarray����
{
	int i;
	for(i=0;i<len;i++)
		cout<<val[i]<<" ";
	return 0;
}

int main( )
{
  
   int i;
   valarray <int> val(len);
   valarray <int> val2;
   val[0]=1;
   for(i=1;i<len;i++)       //�����val��ֵ
	   val[i]=-val[i-1];

   cout<<"The val is: ";
   print(val);          //�����ӳ������ڴ�ӡval��
   cout<<endl;

   cout<<"The val2 is: ";
   val2=abs(val);
   print(val2);        //�����ӳ������ڴ�ӡval2��
   cout<<endl;

   return 0;
}
