#include<iostream.h>
#include<stdlib.h>

int main()
{
	double value;
	int dec,sign,ndig=7,d;
    value=-122.345;
	cout<<"value = "<<value<<endl;
	cout<<"string = "<<ecvt(value,ndig,&dec,&sign)<<endl;
	cout<<"dec = "<<dec<<endl;
	cout<<"sign = "<<sign<<endl;
	return 0;
}
