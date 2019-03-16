#include<iostream.h>
#include<dirent.h>
#include<dir.h>
#include<stdio.h>

int main()
{
	DIR *dirp;
	dirp=opendir("c");         //打开目录c，它里面有两个文件夹c1和c2
	dirent *ent;
	if(dirp==NULL)         //当读取失败时
		cout<<"Fail to open dir stream!"<<endl;
	else                  //读取成功时
	{
		ent=readdir(dirp);     
		while(ent!=NULL)       //将目录条打印出来。
		{
			printf("%s\n",ent->d_name);
			ent=readdir(dirp);
		}
        
        rewinddir(dirp);
		cout<<"Read the data again!"<<endl;

	    ent=readdir(dirp);     
		while(ent!=NULL)       //将目录条打印出来。
		{
			printf("%s\n",ent->d_name);
			ent=readdir(dirp);
		}
		closedir(dirp);
	}
	return 0;
}
