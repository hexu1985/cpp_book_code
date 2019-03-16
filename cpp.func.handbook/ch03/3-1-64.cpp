#include<iostream.h>
#include<stdio.h>

int main()
{
	if(remove("temp2.txt2")==0)           //成功删除temp2时
		cout<<"success to remove temp2.txt"<<endl;
	else                                  //失败时
		cout<<"can't be removed temp2.txt"<<endl;
	return 0;
}
