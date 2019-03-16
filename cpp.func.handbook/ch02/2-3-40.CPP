#include<iostream.h>
#include<math.h>
#include<complex.h>

int main()
{
    double x,y;
	double xl,yl;
	complex z;
	x=2.0;
	y=1.5;
	xl=12.3;
	yl=32.1;
	z=complex(1.0,2.0);
	cout<<x<<"^"<<y<<" = "<<pow(x,y)<<endl;
	cout<<xl<<"^"<<yl<<" = "<<powl(xl,yl)<<endl;
	cout<<x<<"^(1+2i) ="<<pow(x,z)<<endl;
	cout<<"(1+2i)^"<<y<<" = "<<pow(z,y)<<endl;
	return 0;
}
