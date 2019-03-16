#include <set>
#include <iostream>

using namespace std;

int print(multiset <int> c)       //用于打印一个multiset
{
    multiset <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
    cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   multiset <int> ctr1, ctr2;
   multiset <int>::const_iterator cp;
   
   int i;
   for(i=0;i<3;i++)     //下面给先给ctr1和ctr2赋值
   {
	   ctr1.insert(i);
	   ctr2.insert(i+10); 
   }

   cout<<"Before exchange with ctr2 the ctr1 is:";
   print(ctr1);                        //调用子程序，把ctr2打印出来
   cout<<endl;
   
   cout<<"After exchange with ctr2 the ctr1 is:";   
   ctr1.swap(ctr2);          //让ctr1的内容与ctr2交换
   print(ctr1);               //调用子程序，把ctr1打印出来
   cout<<endl;

   return 0;
}
