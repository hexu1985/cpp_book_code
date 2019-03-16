#include<iostream.h>
#include<bcd.h>

int main()
{
    int x=1234;
	 cout<<"the BCD of"<<x<<" is:"<<bcd(x)<<endl;
    double y=1234.567;
	cout<<"the BCD of"<<y<<" is:"<<bcd(y)<<endl;
    int decimals=2;
	cout<<"the BCD of"<<y<<" is:"<<bcd(y,decimals)<<endl;
	return 0;
}
