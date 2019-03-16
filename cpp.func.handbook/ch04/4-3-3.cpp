#include<iostream.h>
#include<math.h>
#include<string.h>

int matherr(struct exception *e)
{
	if(e->type==DOMAIN)          //当发生函数定义域错误时
	{
		if(strcmp(e->name,"pow")==0&&e->arg1==0&&e->arg2<0)   //当作pow运算，且底数为0，指数为小于0的数时
		{
		  cout<<"pow("<<e->arg1<<","<<e->arg2<<") is not correct!"<<endl;   //提示错误
		  cout<<"Now set it to be 0"<<endl;                       //提示错误的改正方法
		  e->retval=0;
		  return 0;
		}
	}
	return 0;
}

int main()
{
 pow(0,-1);    //引发错误，以调用matherr函数
 return 0;
}
