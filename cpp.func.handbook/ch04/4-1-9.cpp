#include<iostream.h>
#include<stdlib.h>
#include<string.h>

int compare(const char *enum1,const char *enum2)  //用于进行字符的比较
{
   
   return(enum1[0]-enum2[0]);
}

int main()
{
	int num,i;
    char base[30]="acaefgbdeiagf";
	char key='c';
    num=strlen(base);   //给出base的个数
    qsort(base,num,sizeof(char),(int (*)(const void *,const void *))compare);   //对数组base进行快速排序。
	cout<<"The array after qosrt is:"<<endl;
	for(i=0;i<num;i++)cout<<base[i]<<" ";
	cout<<endl;
	return 0;
}
