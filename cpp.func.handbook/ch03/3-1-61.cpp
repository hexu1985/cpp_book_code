#include<iostream.h>
#include<stdio.h>

int main()
{
    FILE *fp;
	char str[20];
	fp=fopen("temp.txt","r");           //��ֻ���������ļ�temp.txt
    fgets(str,10,fp);                  //��ȡtemp.txt�е��ַ���
	printf("The contents in temp.txt is: ");
	puts(str);             //��stdout������ַ���str
	fclose(fp);        //�ر��ļ�
	return 0;
}
