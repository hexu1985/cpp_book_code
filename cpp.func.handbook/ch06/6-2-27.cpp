#include <list>
#include <iostream>
using namespace std;
#define len 5

int print(list <int> c)       //用于打印一个list
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
   ctr.push_back(1);
   ctr.push_back(1);
   ctr.push_back(2);
   ctr.push_back(3);
   ctr.push_back(3);
   ctr.push_back(3);
   ctr.push_back(4);

   cout<<"ctr is:";
   print(ctr);                        //调用子程序，把ctr打印出来
   cout<<endl;
   
   cout<<"After using unique, ctr is:"; 
   ctr.unique();
   print(ctr);               //调用子程序，把ctr打印出来
   cout<<endl;
   return 0;
}
