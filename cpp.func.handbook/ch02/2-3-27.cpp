#include<iostream.h>
#include<math.h>

int main()
{
 int exponent;
 double x;
 long double lx;
 x=2.3;
 lx=654321.0;
 cout<<"The mantissa of "<<x<<" is: "<<frexp(x,&exponent)<<endl;
 cout<<"The exponent of "<<x<<" is: "<<exponent<<endl;
 cout<<"The mantissa of "<<lx<<" is: "<<frexp(lx,&exponent)<<endl;
 cout<<"The exponent of "<<lx<<" is: "<<exponent<<endl;
 return 0;
}
