#include <stdio.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

//����һ��struct
struct Myclass
{
	char fn0()
	{
		return ('\7');//�޲�������
	}

	char fn1(char ch)
	{
		return (ch+1);//һԪ����
	}
} mycl;

int main()
{
 //��ʼ��
	char buf[]="\4\3\2\1";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
    char *mid=first+2;

 //ʹ��mem_fun1_t����mycl�еĺ���
	mem_fun1_t<char,Myclass,char> mf1(Myclass::fn1);
	
printf("%c\n",mf1(&mycl,'\3'));//��ʾ���
	printf("%c\n",mem_fun1(Myclass::fn1)(&mycl,'\3'));//��ʾ���

	return 1;
}
