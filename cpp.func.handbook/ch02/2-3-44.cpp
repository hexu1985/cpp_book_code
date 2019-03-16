#include<iostream.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int i;
	randomize();
	cout<<"Here are 5 random number less than 100:"<<endl;
	for(i=1;i<=5;i++)cout<<random(100)<<" ";
	return 0;
}        
