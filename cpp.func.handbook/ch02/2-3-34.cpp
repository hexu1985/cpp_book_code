#include<iostream.h>
#include<math.h>
#include<complex.h>

int main()
{
 double x;
 long double lx;
 complex z;
 x=10.0;
 cout<<"Log10("<<x<<") = "<<log10(x)<<endl;
 lx=654321.0;
 cout<<"Log10("<<lx<<") = "<<log10l(lx)<<endl;
 z=complex(2.0,1.0);
 cout<<"Log10(z) = "<<log10(z)<<endl;
 return 0;
}
