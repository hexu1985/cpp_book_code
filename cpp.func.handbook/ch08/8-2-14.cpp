#include <stdio.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

//һԪ������������һ���ַ�
char ufn(char ch)
{
	return (ch+1);
}

int main()
{
 //��ʼ��
	char buf[]="\4\3\2\1";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
    char *mid=first+2;

 //����pointer_to_unary_function
	pointer_to_unary_function<char,char> uf(ufn);
	transform(first,mid,dest,uf);//ת��
	transform(mid,last,dest+2,ptr_fun(ufn));//ת��

	printf("%s\n",dest);	//��ʾ���
	return 1;
}
