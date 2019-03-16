#include<iostream.h>
#include<math.h>
#include<complex.h>

int main()
{
   double x;
   x=1.0;
   cout<<"The hyperbolic tangent of "<<x<<" is:"<<tanh(x)<<endl;
   complex z;
   z=complex(1.0);
   cout<<"The hyperbolic tangent of"<<z<<"is:"<<tanh(z)<<endl;
   long double xl;
   xl=123.45;
   cout<<"The hyperbolic tangent of "<<xl<<" is:"<<tanhl(xl)<<endl;
   return 0;
}
