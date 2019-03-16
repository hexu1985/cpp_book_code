#include<iostream.h>
#include<math.h>
#include<string.h>

int _matherrl(struct _exceptionl *e)
{
	if(e->type==DOMAIN)
	{
		if(strcmp(e->name,"powl")==0&&e->arg1==0&&e->arg2<0)
		{
		  cout<<"powl("<<e->arg1<<","<<e->arg2<<") is not correct!"<<endl;
		  cout<<"Now set it to be 0"<<endl;
		  e->retval=0;
		  return 0;
		}
	}
	return 0;
}

int main()
{
 powl(0,-1);
 return 0;
}
