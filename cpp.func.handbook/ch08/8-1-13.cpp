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

 //ʹ��mem_fun_ref_t����mycl�еĺ���
 mem_fun_ref_t<char,Myclass> mfr(Myclass::fn0);

	printf("%c\n",mfr(mycl));//��ʾ���
	printf("%c\n",mem_fun_ref(Myclass::fn0)(mycl));//��ʾ���

	return 1;
}
