#include <iostream>
#include <iomanip>
using namespace std;
#define len 5

int main( ) 
{
   char ch='*';
   int i;
   for(i=1;i<len;i++)
	   cout<<setfill(ch)<<setw(i)<<"*"<<endl;  //��ӡ��һ������
   return 0;
}
