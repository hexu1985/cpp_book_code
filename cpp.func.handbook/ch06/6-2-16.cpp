#include <list>
#include <iostream>
using namespace std;
#define len 5

int print(list <int> c)       //用于打印一个链表
{
  list <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   list <int> ctr;
   list <int>::iterator cp; 
   int i;
   for(i=0;i<len;i++)ctr.push_back(i);    //下面给先给ctr赋值

   cout<<"ctr is:";
   print(ctr);                        //调用子程序，把ctr打印出来
   cout<<endl;
   
   cout<<"After push_back the ctr is:"; 
   ctr.push_back(10);           //插入一个素到链尾。
   print(ctr);               //调用子程序，把ctr打印出来
   cout<<endl;
   return 0;
}
