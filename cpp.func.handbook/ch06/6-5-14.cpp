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
   multiset <int> ctr1;    //创建一个有两个为字母为'a'的multiset
   int i;
   for(i=0;i<=3;i++)ctr1.insert(i);  //给ctr1赋值  

   multiset <int> ctr2(ctr1);         //创建一个以ctr1相同的multiset容器
   cout<<"The ctr2 is: ";     
   print(ctr2);               //打印ctr2的内容 
   cout<<endl;
   return 0;
}
