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
   map <int,int> ctr1;    //创建一个有两个为字母为'a'的map
   int i;
   for(i=0;i<=3;i++)ctr1.insert(pair <int,int>(i,i));  //给ctr1赋值  

   map <int,int> ctr2(ctr1);         //创建一个以ctr1相同的map容器
   cout<<"The ctr2 is: ";     
   print(ctr2);               //打印ctr2的内容 
   cout<<endl;
   return 0;
}
