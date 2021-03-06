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


   cout<<"Before assign ctr2 is:";
   print(ctr2);                        //调用子程序，把ctr2打印出来
   cout<<endl;
   
   cout<<"After the first assign ctr2 is:";   
   ctr2.assign(ctr1.begin(),ctr1.end());       //让ctr1的内容填入ctr2中
   print(ctr2);               //调用子程序，把ctr2打印出来
   cout<<endl;

   cout<<"After the second assign ctr2 is:";
   ctr2.assign(2,5);         //设置ctr2为两个元均为5
   print(ctr2);          //调用子程序，把ctr2打印出来
   cout<<endl;
   return 0;
}
