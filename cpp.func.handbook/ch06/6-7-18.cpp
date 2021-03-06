#include <vector>
#include <iostream>
using namespace std;
#define len 5

int print(vector <int> c)       //用于打印一个vector容器
{
  vector <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   vector <int> ctr(len);
   int i;
   for(i=0;i<len;i++)ctr[i]=i;    //下面给先给ctr赋值

   cout<<"ctr is:";
   print(ctr);                        //调用子程序，把ctr打印出来
   cout<<endl;
   
   cout<<"After The first rsize the ctr is:";
   ctr.resize(7,10);               //修改vector容器的大小，新加的用10补上
   print(ctr);
   cout<<endl;

   cout<<"After The second rsize the ctr is:";
   ctr.resize(4);             //修改vector容器的大小，删除vector容器的后半部分
   print(ctr);
   cout<<endl;
   return 0;
}
