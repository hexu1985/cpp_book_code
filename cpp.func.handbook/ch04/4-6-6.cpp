#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define LEN 1000

int main()
{
 gotoxy(2,2);                //�ù�굽����Ļ������Ϊ(2,2)��λ��
	text_info ti;
	gettextinfo(&ti);            //ȡ���ı�ģʽ����Ϣ
	printf("x: %d\n",ti.curx);     //��ӡ������ˮƽλ��
 printf("y: %d\n",ti.cury);   //��ӡ�����Ĵ�ֱλ��
	return 0;
}
