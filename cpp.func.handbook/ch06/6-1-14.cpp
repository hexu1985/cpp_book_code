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
   int i;
   for(i=0;i<len;i++)ctr[i]=i;    //下面给先给ctr赋值

   cout<<"ctr is:";
   print(ctr);                        //调用子程序，把ctr打印出来
   cout<<endl;
   
   cout<<"After pop_back the ctr is:"; 
   ctr.pop_back();           //将ctr的最后一个元素删去
   print(ctr);               //调用子程序，把ctr打印出来
   cout<<endl;
   return 0;
}
