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
		
  //ʹ��const_mem_fun1_ref_tym����myccl�еĺ���
	const_mem_fun1_ref_t<char,Mycclass,char> cmf1r(Mycclass::fn1);

	printf("%c\n",cmf1r(mycl,'\3'));//��ʾ���
	printf("%c\n",mem_fun1_ref(Mycclass::fn1)(myccl,'\3'));//��ʾ���
	
	return 1;
}
