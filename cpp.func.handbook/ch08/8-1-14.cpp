#include <stdio.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

//构造一个struct
struct Myclass
{
	char fn0()
	{
		return ('x');//无参数函数
	}

	char fn1(char ch)
	{
		return (ch+1);//一元函数
	}
} mycl;

int main()
{
	//初始化
char buf[]="wxyz";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
    char *mid=first+2;

 //使用mem_fun_t调用mycl中的函数
mem_fun_t<char,Myclass> mf(Myclass::fn0);

	printf("%c\n",mf(&mycl));//显示结果
	printf("%c\n",mem_fun(Myclass::fn0)(&mycl));//显示结果

	return 1;
}
