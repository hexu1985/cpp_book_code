#include<iostream.h>
#include<dirent.h>
#include<dir.h>
#include<stdio.h>

int main()
{
	DIR *dirp;
	dirp=opendir("c");         //��Ŀ¼c���������������ļ���c1��c2
	dirent *ent;
	if(dirp==NULL)         //����ȡʧ��ʱ
		cout<<"Fail to open dir stream!"<<endl;
	else                  //��ȡ�ɹ�ʱ
	{
		ent=readdir(dirp);     
		while(ent!=NULL)       //��Ŀ¼����ӡ������
		{
			printf("%s\n",ent->d_name);
			ent=readdir(dirp);
		}
        
        rewinddir(dirp);
		cout<<"Read the data again!"<<endl;

	    ent=readdir(dirp);     
		while(ent!=NULL)       //��Ŀ¼����ӡ������
		{
			printf("%s\n",ent->d_name);
			ent=readdir(dirp);
		}
		closedir(dirp);
	}
	return 0;
}
