#include <deque>
#include <iostream>
using namespace std;
#define len 5

int print(deque <int> c)       //用于打印一个队列
{
  deque <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   deque <int> ctr(len);
   deque <int>::iterator cp; 
   deque <int>::reverse_iterator rcp;
   int i;
   for(i=0;i<len;i++)ctr[i]=i;    //下面给先给ctr赋值

   cout<<"ctr is:";
   print(ctr);                        //调用子程序，把ctr打印出来
   cout<<endl;
   
   cout<<"Its reverse is:";
   for(rcp=ctr.rbegin();rcp!=ctr.rend();rcp++)   //打印出反向队列
	   cout<<*rcp<<" ";
   cout<<endl;
   return 0;
}
