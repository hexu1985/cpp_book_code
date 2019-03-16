#include <valarray>
#include <iostream>
#include <cmath>
using namespace std;
#define len 5

int print(valarray <double> val)  //该子程序用于打印一个valarray对象。
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
   for(i=0;i<len;i++)       //下面给val赋值
	   val[i]=i;
   for(i=0;i<len;i++)  //下面给val2赋值
       val2[i]=10-i;

   cout<<"The val is: ";
   print(val);          //调用子程序用于打印val。
   cout<<endl;

   cout<<"The result is: ";
   result=pow(val,val2);
   print(result);        //调用子程序用于打印val2。
   cout<<endl;

   return 0;
}
