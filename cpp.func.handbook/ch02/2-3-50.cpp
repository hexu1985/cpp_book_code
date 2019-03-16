#include<iostream.h>
#include<math.h>
#include<complex.h>

int main()
{
   double x;
   x=1.0;
   cout<<"The tangent of "<<x<<" is:"<<tan(x)<<endl;
   complex z;
   z=complex(1.0);
   cout<<"The tangent of"<<z<<"is:"<<tan(z)<<endl;
   long double xl;
   xl=123.45;
   cout<<"The tangent of "<<xl<<" is:"<<tanl(xl)<<endl;
   return 0;
}
