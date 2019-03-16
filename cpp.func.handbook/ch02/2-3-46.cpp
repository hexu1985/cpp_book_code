#include<iostream.h>
#include<math.h>
#include<complex.h>

int main()
{
   double x;
   x=1.0;
   cout<<"The sine of "<<x<<" is:"<<sin(x)<<endl;
   complex z;
   z=complex(1.0);
   cout<<"The sine of"<<z<<"is:"<<sin(z)<<endl;
   long double xl;
   xl=12345.67;
   cout<<"The sine of "<<xl<<" is:"<<sinl(xl)<<endl;
   return 0;
}
