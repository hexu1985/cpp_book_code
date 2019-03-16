#include<iostream.h>
#include<time.h>

int main()
{
    time_t now;
	tm *t;
	now=time(NULL);       //取出当前时间的time_t结构表示
    t=localtime(&now);          //将now转为tm结构的时间信息
    cout<<"Now is year "<<t->tm_year<<endl;
	cout<<"month "<<t->tm_mon<<endl;
	cout<<"day "<<t->tm_mday<<endl;
    return 0;
}
