#include<iostream.h>
#include<stdlib.h>
#include<string.h>

int compare(const char *enum1,const char *enum2)  //���ڽ����ַ��ıȽ�
{
   
   return(enum1[0]-enum2[0]);
}

int main()
{
	int num,i;
    char base[30]="acaefgbdeiagf";
	char key='c';
    num=strlen(base);   //����base�ĸ���
    qsort(base,num,sizeof(char),(int (*)(const void *,const void *))compare);   //������base���п�������
	cout<<"The array after qosrt is:"<<endl;
	for(i=0;i<num;i++)cout<<base[i]<<" ";
	cout<<endl;
	return 0;
}
