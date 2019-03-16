#include <list>
#include <iostream>
using namespace std;

int print(list <int> c)       //用于打印一个链表
{
  list <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   list <int> ctr1, ctr2;
   list <int>::const_iterator cp;
   
   int i;
   for(i=0;i<3;i++)     //下面给先给ctr1和ctr2赋值
   {
	   ctr1.push_back(i);
	   ctr2.push_back(i+10);
   }
   list <int> ctr3(ctr2);
   cout<<"Before assign both ctr2 and ctr3 are:";
   print(ctr2);                        //调用子程序，把ctr2打印出来
   cout<<endl;
   
   cout<<"After merge with ctr1 ctr2 is:";   
   ctr2.merge(ctr1);          //让ctr1的内容归并到ctr2中
   print(ctr2);               //调用子程序，把ctr2打印出来
   cout<<endl;

   cout<<"After merge with ctr1 by the greater comparison ctr3 is:";   
   ctr3.merge(ctr2,greater <int>());     //让ctr2的内容填入ctr3中的尾部
   print(ctr3);               //调用子程序，把ctr2打印出来
   cout<<endl;

   return 0;
}
