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
		return ('x');//�޲�������
	}

	char fn1(char ch) const
	{
		return (ch+1);//һԪ����
	}
} myccl;

int main()
{
 	//��ʼ��
char buf[]="wxyz";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
  char *mid=first+2;
		
 //ʹ��const_mem_fun_t����myccl�еĺ���
	const_mem_fun_t<char,Mycclass> cmf(Mycclass::fn0);

	printf("%c\n",cmf(&myccl));//��ʾ���
	printf("%c\n",mem_fun(Mycclass::fn0)(&myccl));//��ʾ���	
	
	return 1;
}
