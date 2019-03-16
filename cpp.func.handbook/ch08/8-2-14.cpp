#include <stdio.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

//一元函数，返回下一个字符
char ufn(char ch)
{
	return (ch+1);
}

int main()
{
 //初始化
	char buf[]="\4\3\2\1";
	char dest[]="abcd";
	char *first=buf,*last=buf+4;
    char *mid=first+2;

 //调用pointer_to_unary_function
	pointer_to_unary_function<char,char> uf(ufn);
	transform(first,mid,dest,uf);//转换
	transform(mid,last,dest+2,ptr_fun(ufn));//转换

	printf("%s\n",dest);	//显示结果
	return 1;
}
