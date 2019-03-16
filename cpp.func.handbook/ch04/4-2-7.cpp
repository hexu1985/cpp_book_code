#include<iostream.h>
#include<dos.h>

int main()
{
    date datep;
    getdate(&datep);
	cout<<"Now the year is: "<<datep.da_year<<endl;
	return 0;
}
