#include <stdio.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

//����һ��struct��
struct Mycclass
{
	char fn0() const
	{
		return ('x');//�޲�������
	}

	char fn1(char ch) const//һԪ����
	{
		return (ch+1);
	}
} myccl;

int main()
{
  //��ʼ��
	char buf[]="wxyz";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
  char *mid=first+2;
		
 //ʹ��const_mem_fun_ref_t����myccl�еĺ���
 const_mem_fun_ref_t<char,Mycclass> cmfr(Mycclass::fn0);

	printf("%c\n",cmfr(myccl));//��ʾ���
	printf("%c\n",mem_fun_ref(Mycclass::fn0)(myccl));//��ʾ���	
	
	return 1;
}
