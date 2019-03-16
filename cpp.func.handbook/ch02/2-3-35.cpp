#include<iostream.h>
#include<math.h>
#include<string.h>

int matherr(struct exception *e)
{
	if(e->type==DOMAIN)
	{
		if(strcmp(e->name,"pow")==0&&e->arg1==0&&e->arg2<0)
		{
		  cout<<"pow("<<e->arg1<<","<<e->arg2<<") is not correct!"<<endl;
		  cout<<"Now set it to be 0"<<endl;
		  e->retval=0;
		  return 0;
		}
	}
	return 0;
}

int main()
{
 pow(0,-1);
 return 0;
}
