#include <set>
#include <iostream>
using namespace std;

int print(set <int> c)       //用于打印一个set
{
    set <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   set <int> ctr;
   set <int>::const_iterator cp;
   int i;
   for(i=0;i<=3;i++)ctr.insert((i,i));  //给ctr赋值
   cout<<"The ctr is: ";
   print(ctr);          //调用子程序来打印ctr的内容 
   cout<<endl;

   cp=ctr.lower_bound(2);
   if(cp!=ctr.end())
   {
	   cout<<"The first element which key >= 2 is: ";
	   cout<<*cp;              //调用子程序来打印一项。
	   cout<<endl;
   }
   return 0;
}
