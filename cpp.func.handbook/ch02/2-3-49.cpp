#include<iostream.h>
#include<stdlib.h>

int main()
{
    int i;
	srand(100);
	cout<<"Here are 5 random number more than 100:"<<endl;
	for(i=1;i<=5;i++)cout<<rand()<<" ";
	return 0;
}
