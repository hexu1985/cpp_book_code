#include <set>
#include <iostream>
using namespace std;
#define len 5

int print(multiset <int> c)       //用于打印一个multiset
{
    multiset <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   multiset <int> ctr;
   multiset <int>::iterator cp;
   
   int i;
   for(i=0;i<len;i++)ctr.insert(i);    //下面给先给ctr赋值

   cout<<"ctr is:";
   print(ctr);                        //调用子程序，把ctr打印出来
   cout<<endl;
   

   cp=ctr.find(2);         //查找key=2的元素
   if(cp!=ctr.end())         //找到时，打印出来
   {
	   cout<<"The element whose key = 2 is:";
	   cout<<*cp;
	   cout<<endl;
   }
   else              //找不到时
	   cout<<"There is no element whose key = 2"<<endl;
   return 0;
}
