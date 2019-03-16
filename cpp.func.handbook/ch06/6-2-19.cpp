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
   list <int> ctr;
   list <int>::iterator cp; 
   list <int>::reverse_iterator rcp;
   int i;
   for(i=0;i<len;i++)ctr.push_back(i);    //下面给先给ctr赋值
   ctr.push_back(2);
   ctr.push_back(3);

   cout<<"ctr is:";
   print(ctr);                        //调用子程序，把ctr打印出来
   cout<<endl;
   
   cout<<"After remove the list with value 2,the list is:";
   ctr.remove(2);                   //删除值为2的那些元素
   print(ctr);                      //调用子程序，把ctr打印出来
   cout<<endl;
   return 0;
}
