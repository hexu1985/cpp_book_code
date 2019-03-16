#include <list>
#include <iostream>
using namespace std;
#define len 5

int print(list <int> c)       //用于打印一个list容器
{
    list <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   list <int> ctr1,ctr2;
   list <int>::iterator cp;
   int i;
   for(i=0;i<len;i++)   //下面给先给ctr1、ctr2赋值
   {
	   ctr1.push_back(i); 
       ctr2.push_back(i+10);
   }

   cout<<"Before splice from ctr2, ctr1 is: ";
   print(ctr1);                        //调用子程序，把ctr打印出来
   cout<<endl;
   
   cout<<"After splice from ctr2, ctr1 is:  "; 
   cp=ctr1.begin();
   ctr1.splice(cp,ctr2);           //将ctr2插入到ctr1的前方
   print(ctr1);               //调用子程序，把ctr1打印出来
   cout<<endl;
   return 0;
}
