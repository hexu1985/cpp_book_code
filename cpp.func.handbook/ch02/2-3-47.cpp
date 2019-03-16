#include<iostream.h>
#include<math.h>
#include<complex.h>

int main()
{
   double x;
   x=1.0;
   cout<<"The hyperbolic sine of "<<x<<" is:"<<sinh(x)<<endl;
   complex z;
   z=complex(1.0);
   cout<<"The hysine of"<<z<<"is:"<<sinh(z)<<endl;
   long double xl;
   xl=123.45;
   cout<<"The hyperbolic sine of "<<xl<<" is:"<<sinhl(xl)<<endl;
   return 0;
}
