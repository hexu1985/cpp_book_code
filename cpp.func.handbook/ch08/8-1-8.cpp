#include <stdio.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

//����һ��struct
struct Mycclass
{
	char fn0() const
	{
		return ('\7');//�޲�������
	}

	char fn1(char ch) const
	{
		return (ch+1);//һԪ����
	}
} myccl;

int main()
{
 //��ʼ��
	char buf[]="\4\3\2\1";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
    char *mid=first+2;
		
//ʹ��const_mem_fun1_t����myccl�еĺ���
const_mem_fun1_t<char,Mycclass,char> cmf1(Mycclass::fn1);

	printf("%c\n",cmf1(&myccl,'\3'));//��ʾ���
	printf("%c\n",mem_fun1(Mycclass::fn1)(&myccl,'\3'));��ʾ���
	
	return 1;
}
