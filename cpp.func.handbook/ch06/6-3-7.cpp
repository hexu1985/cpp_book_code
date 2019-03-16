#include <map>
#include <iostream>
using namespace std;
#define len 5

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
   map <int,int>::iterator cp;
   
   int i;
   for(i=0;i<len;i++)ctr.insert(pair <int,int>(i,i));    //下面给先给ctr赋值

   cout<<"ctr is:";
   print(ctr);                        //调用子程序，把ctr打印出来
   cout<<endl;
   
   cout<<"After erase the second element  ctr is:"; 
   cp=ctr.begin();
   cp++;
   ctr.erase(cp);       //擦除ctr的cp位置的元素
   print(ctr);          //调用子程序，把ctr打印出来
   cout<<endl;
   return 0;
}
