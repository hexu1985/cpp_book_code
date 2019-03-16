#include <vector>
#include <iostream>
using namespace std;

int print(vector <char> c)       //用于打印一个vector容器
{
  vector <char>::const_iterator cp;
  for(cp=c.begin();cp!=c.end();cp++)   //让cp从c的开始到结束打印cp对应的值       
  cout<<*cp<<" ";
	return 0;
}  

int main( ) 
{
   vector <char> ctr(2,'a');    //创建一个有两个为字母为'a'的vector
   cout<<"The ctr is: ";     
   print(ctr);               //打印ctr的内容 
   cout<<endl;
   return 0;
}
