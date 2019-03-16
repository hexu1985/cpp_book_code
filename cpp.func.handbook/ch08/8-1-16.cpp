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
		return ('\7');//无参数函数
	}

	char fn1(char ch)
	{
		return (ch+1);//一元函数
	}
} mycl;

int main()
{
 //初始化
	char buf[]="\4\3\2\1";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
    char *mid=first+2;

 //使用mem_fun1_t调用mycl中的函数
	mem_fun1_t<char,Myclass,char> mf1(Myclass::fn1);
	
printf("%c\n",mf1(&mycl,'\3'));//显示结果
	printf("%c\n",mem_fun1(Myclass::fn1)(&mycl,'\3'));//显示结果

	return 1;
}
