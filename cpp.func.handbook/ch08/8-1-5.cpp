#include <stdio.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

//构建一个struct。
struct Mycclass
{
	char fn0() const
	{
		return ('x');//无参数函数
	}

	char fn1(char ch) const//一元函数
	{
		return (ch+1);
	}
} myccl;

int main()
{
  //初始化
	char buf[]="wxyz";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
  char *mid=first+2;
		
 //使用const_mem_fun_ref_t调用myccl中的函数
 const_mem_fun_ref_t<char,Mycclass> cmfr(Mycclass::fn0);

	printf("%c\n",cmfr(myccl));//显示结果
	printf("%c\n",mem_fun_ref(Mycclass::fn0)(myccl));//显示结果	
	
	return 1;
}
