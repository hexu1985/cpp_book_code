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
		return ('x');//�޲�������
	}

	char fn1(char ch)
	{
		return (ch+1);//һԪ����
	}
} mycl;

int main()
{
 //��ʼ��
	char buf[]="wxyz";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
    char *mid=first+2;

 //ʹ��mem_fun1_ref_t����mycl�еĺ���
	mem_fun1_ref_t<char,Myclass,char> mf1r(Myclass::fn1);

	printf("%c\n",mf1r(mycl,'\3'));//��ʾ���
	printf("%c\n",mem_fun1_ref(Myclass::fn1)(mycl,'\3'));//��ʾ���

	return 1;
}
