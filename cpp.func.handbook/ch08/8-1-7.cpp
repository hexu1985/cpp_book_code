#include <stdio.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

//构造一个struct
struct Mycclass
{
	char fn0() const
	{
		return ('x');//无参数函数
	}

	char fn1(char ch) const
	{
		return (ch+1);//一元函数
	}
} myccl;

int main()
{
 //初始化
	char buf[]="wxyz";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
    char *mid=first+2;
		
  //使用const_mem_fun1_ref_tym调用myccl中的函数
	const_mem_fun1_ref_t<char,Mycclass,char> cmf1r(Mycclass::fn1);

	printf("%c\n",cmf1r(mycl,'\3'));//显示结果
	printf("%c\n",mem_fun1_ref(Mycclass::fn1)(myccl,'\3'));//显示结果
	
	return 1;
}
