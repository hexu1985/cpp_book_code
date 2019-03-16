#include <map>
#include <iostream>
using namespace std;

int print_one_item(map <int,int>::const_iterator cp)
{
	cout<<"("<<cp->first<<" , "<<cp->second<<") ";
	return 0;
}

int print(map <int,int> c)       //用于打印一个map
{
    map <int,int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
    print_one_item(cp);
	return 0;
}

int main( ) 
{
   map <int,int> ctr;
   pair <map <int,int>::const_iterator, map <int,int>::const_iterator> p;
   int i;
   for(i=0;i<=3;i++)ctr.insert(pair <int,int>(i,i));  //给ctr赋值
   cout<<"The ctr is: ";
   print(ctr);          //调用子程序来打印ctr的内容 
   cout<<endl;

   p=ctr.equal_range(2);
   if(p.first!=ctr.end())
   {
	   cout<<"The first element which key >= 2 is: ";
	   print_one_item(p.first);
	   cout<<endl;
   }
   if(p.second!=ctr.end())
   {
	   cout<<"The first element which key > 2 is: ";
	   print_one_item(p.second);
	   cout<<endl;
   }
   return 0;
}
