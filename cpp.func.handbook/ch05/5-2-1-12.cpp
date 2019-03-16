#include<complex>
#include<iostream>
using namespace std;

int main()
{
	complex<double> x(2,1);
	int y=3;
	complex<double> z=pow(x,y);
	cout<<z<<"\n";
	return 0;
}

