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
   pair <set <int>::const_iterator, set <int>::const_iterator> p;
   int i;
   for(i=0;i<=3;i++)ctr.insert(i);  //给ctr赋值
   cout<<"The ctr is: ";
   print(ctr);          //调用子程序来打印ctr的内容 
   cout<<endl;

   p=ctr.equal_range(2);
   if(p.first!=ctr.end())
   {
	   cout<<"The first element which key >= 2 is: ";
	   cout<<*p.first;             //调用子程序来打印一项。
	   cout<<endl;
   }
   if(p.second!=ctr.end())
   {
	   cout<<"The first element which key > 2 is: ";
	   cout<<*p.second; 
	   cout<<endl;
   }
   return 0;
}
