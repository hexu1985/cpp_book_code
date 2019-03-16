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
   map <int,int> ctr1, ctr2;
   map <int,int>::const_iterator cp;
   
   int i;
   for(i=0;i<3;i++)     //下面给先给ctr1和ctr2赋值
   {
	   ctr1.insert(pair <int,int>(i,i));
	   ctr2.insert(pair <int,int>(i,i+10)); 
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
