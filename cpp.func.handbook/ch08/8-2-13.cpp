#include <stdio.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

//��Ԫ���������ض����ַ����
char bfn(char ch1,char ch2)
{
	return (ch1+ch2);
}

int main()
{
	char buf[]="\4\3\2\1";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
    char *mid=first+2;

 //����pointer_to_binary_funtion
	pointer_to_binary_function<char,char,char> bf(bfn);
	transform(first,mid,"\2\2",dest,bf);//ת��
	transform(mid,last,"\2\2",dest+2,ptr_fun(bfn));//ת��
	
printf("%s\n",dest);//��ʾ���
	
	return 1;
}
