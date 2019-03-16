#include<iostream.h>
#include<stdlib.h>
#include<string.h>

int compare(const char *enum1,const char *enum2)  //用于进行字符的比较
{
   
   return(enum1[0]-enum2[0]);
}

int main()
{
	size_t num;
    char *base="abcccdefgh";
	char key='c';
    num=strlen(base);   //给出base的个数
	char *result;
	result=(char *)lfind(&key,base,&num,sizeof(char),(int (*)(const void *,const void *))compare);  //找出key的位置
	if(result)                //成功匹配时
		cout<<"Its position is:"<<result-base<<endl;
	else                  //失败时
		cout<<"The key is not found"<<endl;
	return 0;
}
