#include <map>
#include <iostream>
using namespace std;

int print_one_item(map <int,int>::const_iterator cp)   //用于打印map的一个元素
{
	cout<<"("<<cp->first<<" , "<<cp->second<<") ";
	return 0;
}

int print(map <int,int> c)       //用于打印一个map
{
    map <int,int>::const_iterator cp;
for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
           print_one_item(cp);         //调用子程序来打印一个元素
	  return 0;
}

int main( ) 
{
   map <int,int> ctr;
   map <int,int>::const_iterator cp;
   int i;
   for(i=0;i<=3;i++)ctr.insert(pair <int,int>(i,i));  //给ctr赋值
   cout<<"The ctr is: ";
   print(ctr);          //调用子程序来打印ctr的内容 
   cout<<endl;

   cp=ctr.upper_bound(2);
   if(cp!=ctr.end())
   {
	   cout<<"The first element which key > 2 is: ";
	   print_one_item(cp);              //调用子程序来打印一项。
	   cout<<endl;
   }
   return 0;
}
