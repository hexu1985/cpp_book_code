#include<iostream.h>
#include<stdlib.h>
#include<string.h>

int compare(const char *enum1,const char *enum2)  //���ڽ����ַ��ıȽ�
{
   
   return(enum1[0]-enum2[0]);
}

int main()
{
	size_t num;
    char *base="abcccdefgh";
	char key='c';
    num=strlen(base);   //����base�ĸ���
	char *result;
	result=(char *)lfind(&key,base,&num,sizeof(char),(int (*)(const void *,const void *))compare);  //�ҳ�key��λ��
	if(result)                //�ɹ�ƥ��ʱ
		cout<<"Its position is:"<<result-base<<endl;
	else                  //ʧ��ʱ
		cout<<"The key is not found"<<endl;
	return 0;
}
