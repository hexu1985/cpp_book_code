#include <deque>
#include <iostream>
using namespace std;

int print(deque <char> c)       //用于打印一个队列
{
  deque <char>::const_iterator cp;
  for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
  cout<<*cp<<" ";
	return 0;
}  

int main( ) 
{
   deque <char> ctr(2,'a');
   cout<<"The ctr is: ";
   print(ctr);
   cout<<endl;
   return 0;
}