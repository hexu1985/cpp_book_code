#include<iostream.h>
#include<math.h>

int main()
{
 double x;
 double lx;
 int exp;
 x=2.0;
 lx=54321;
 exp=4;
 cout<<x<<" * 2^"<<exp<<" = "<<ldexp(x,exp)<<endl;
 cout<<lx<<" * 2^"<<exp<<" = "<<ldexp(lx,exp)<<endl;
 return 0;
}
