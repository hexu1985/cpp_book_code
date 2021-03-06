#include <map>
#include <iostream>

using namespace std;

#define len 5

int print_one_item(multimap <int,int>::const_iterator cp)   //用于打印multimap的一个元素
{
	cout<<"("<<cp->first<<" , "<<cp->second<<") ";
	return 0;
}

int print(multimap <int,int> c)       //用于打印一个multimap
{
    multimap <int,int>::const_iterator cp;
    for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
           print_one_item(cp);         //调用子程序来打印一个元素
	  return 0;
}

int main( ) 
{
   multimap <int,int> ctr;
   multimap <int,int>::iterator cp; 
   multimap <int,int>::reverse_iterator rcp;
   int i;
   for(i=0;i<len;i++)ctr.insert(pair <int,int>(i,i));    //下面给先给ctr赋值

   cout<<"ctr is:";
   print(ctr);                        //调用子程序，把ctr打印出来
   cout<<endl;
   
   cout<<"Its reverse is:";
   for(rcp=ctr.rbegin();rcp!=ctr.rend();rcp++)   //打印出反向multimap容器
	   cout<<"("<<rcp->first<<" , "<<rcp->second<<") ";
   cout<<endl;
   return 0;
}
