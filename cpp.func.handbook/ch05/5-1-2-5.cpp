#include <iostream>
#include <iomanip>
using namespace std;

int main( ) 
{
   double x=12.3456789;     
   //��Ĭ�ϵľ������
   cout<<"x = "<<x<<endl;

   //��8λ�ľ������
   cout<<setprecision(8)<<"x = "<<x<<endl;

   //��20λ�ľ������
   cout<<setprecision(20)<<"x = "<<x<<endl;

   return 0;
}
