#include<iostream.h>
#include<stdlib.h>

int main()
{
    int i;
	cout<<"Here are 5 random number less than 10:"<<endl;
	for(i=1;i<=5;i++)cout<<random(10)<<" ";
	return 0;
}
