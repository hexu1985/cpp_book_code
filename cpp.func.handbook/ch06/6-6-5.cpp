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
   for(i=0;i<3;i++)ctr.insert(i);  //给ctr赋值
   cout<<"The ctr is: ";
   print(ctr);          //调用子程序来打印ctr的内容 
   cout<<endl<<"The last element is: ";  
   cp=ctr.end();  //让cp指向最后一个元素的位置
   cp--;
   cout<<*cp<<endl;  //显示最后一个元素的值
   return 0;
}
