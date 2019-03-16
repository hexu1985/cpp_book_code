#include<iostream.h>
#include<math.h>
#include<complex.h>

int main()
{
 double x;
 long double lx;
 complex z;
 x=3.0;
 cout<<"Ln("<<x<<") = "<<log(x)<<endl;
 lx=654321.0;
 cout<<"Ln("<<lx<<") = "<<logl(lx)<<endl;
 z=complex(1.0,2.0);
 cout<<"Ln(z) = "<<log(z)<<endl;
 return 0;
}
