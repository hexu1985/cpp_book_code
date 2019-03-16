#include<iostream.h>
#include<dirent.h>
#include<dir.h>
#include<stdio.h>

int main()
{
	DIR *dirp;
	dirp=opendir("c");
	dirent *ent;
	if(dirp==NULL)
		cout<<"Fail to open dir stream!"<<endl;
	else
	{
		ent=readdir(dirp);
		while(ent!=NULL)
		{
			printf("%s\n",ent->d_name);
			ent=readdir(dirp);
		}
		closedir(dirp);
	}
	return 0;
}
