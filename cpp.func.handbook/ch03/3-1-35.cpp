#include<iostream.h>
#include<stdio.h>

int main()
{
	char str[20];
	freopen("temp.txt","r",stdin);
	cin>>str;
	cout<<str<<endl;
	fclose(stdin);
	return 0;
}
