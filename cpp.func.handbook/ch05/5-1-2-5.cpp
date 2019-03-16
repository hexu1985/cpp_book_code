#include <iostream>
#include <iomanip>
using namespace std;

int main( ) 
{
   double x=12.3456789;     
   //以默认的精度输出
   cout<<"x = "<<x<<endl;

   //以8位的精度输出
   cout<<setprecision(8)<<"x = "<<x<<endl;

   //以20位的精度输出
   cout<<setprecision(20)<<"x = "<<x<<endl;

   return 0;
}
