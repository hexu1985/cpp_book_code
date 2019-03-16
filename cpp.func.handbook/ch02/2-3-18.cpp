#include<iostream.h>
#include<math.h>
#include<complex.h>

int main()
{
   double x;
   x=1.0;
   cout<<"the hyperbolic cosine of "<<x<<" is:"<<cosh(x)<<endl;
   complex z;
   z=complex(1.0,2.0);
   cout<<"the hyperbolic cosine of"<<z<<"is:"<<cosh(z)<<endl;
   return 0;
}
