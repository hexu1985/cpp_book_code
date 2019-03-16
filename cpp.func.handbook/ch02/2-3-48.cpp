#include<iostream.h>
#include<math.h>
#include<complex.h>

int main()
{
   double x;
   x=169.0;
   cout<<"The square root of "<<x<<" is:"<<sqrt(x)<<endl;
   complex z;
   z=complex(169.0);
   cout<<"The square root of"<<z<<"is:"<<sqrt(z)<<endl;
   long double xl;
   xl=123456.78;
   cout<<"The square root of "<<xl<<" is:"<<sqrtl(xl)<<endl;
   return 0;
}
