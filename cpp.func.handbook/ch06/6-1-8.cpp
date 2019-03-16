#include <deque>
#include <iostream>
using namespace std;

int print(deque <int> c)       //用于打印一个队列
{
  deque <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   deque <int> ctr(3);
   deque <int>::const_iterator cp;
   int i;
   for(i=0;i<3;i++)ctr[i]=i;
   cout<<"The ctr is: ";
   print(ctr);
   cout<<endl<<"The last element is: ";
   cp=ctr.end()-1;
   cout<<*cp<<endl;
   return 0;
}
