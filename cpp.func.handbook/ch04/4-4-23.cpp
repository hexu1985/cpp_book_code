#include<iostream.h>
#include<process.h>
#include<stdio.h>

void print(int a[])    //义一个子程序，用于将数组的0值前的数据输出
{
	int i;
	for(i=0;;i++)
	{
		if(a[i]==0)
		{
			cout<<endl;
			_cexit();        //它不会因该函数而终止程序
	        printf("This is the end!\n");
		    return ;              //在遇到0时，退出程序。
		}
		else
		{
			cout<<a[i]<<" ";
		}
	}
}

int main()
{
    int a[20]={1,2,3,4,5,0,1,2,3,4};
	print(a);
	return 0;
}
