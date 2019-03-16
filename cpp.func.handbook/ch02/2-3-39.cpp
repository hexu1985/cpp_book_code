#include<iostream.h>
#include<math.h>

int main()
{
        double x=2.0;
	int degree=3;
	double coeffs[]={1.0,2.0,3.0,4.0};
	int i;
	cout<<"f(x)=";
	for(i=degree;i>=2;i--)
		cout<<coeffs[i]<<"x^"<<i<<"+";
	cout<<coeffs[1]<<"x+"<<coeffs[0]<<endl;
	cout<<"f("<<x<<")="<<poly(x,degree,coeffs)<<endl;
	return 0;
}
