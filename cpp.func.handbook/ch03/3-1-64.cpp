#include<iostream.h>
#include<stdio.h>

int main()
{
	if(remove("temp2.txt2")==0)           //�ɹ�ɾ��temp2ʱ
		cout<<"success to remove temp2.txt"<<endl;
	else                                  //ʧ��ʱ
		cout<<"can't be removed temp2.txt"<<endl;
	return 0;
}
