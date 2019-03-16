#include<iostream.h>
#include<sys\stat.h>
#include<io.h>

int main()
{
   char path[20]="readonly.txt";
   int stat;
   stat=chmod(path,S_IWRITE);
   if(stat==0)
	   cout<<"Success!"<<endl;
   else
	   cout<<"Fail!"<<endl;
   return 0;
}
