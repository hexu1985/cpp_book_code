#include<iostream.h>
#include<stdlib.h>
#include<string.h>

int compare(const char *enum1,const char *enum2)
{
   
   return(enum1[0]-enum2[0]);
}

int main()
{
	int num;
    char *base="abcccdefgh";
	char key='c';
    num=strlen(base);
	char *result;
	result=(char *)bsearch(&key,base,num,sizeof(char),(int (*)(const void *,const void *))compare);
	if(result)
		cout<<"Its position is:"<<result-base<<endl;
	else
		cout<<"The key is not found"<<endl;
	return 0;
}
