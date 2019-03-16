#include <iostream>
#include <iomanip>
using namespace std;

int main( ) 
{
   int x=1234;     
   cout<<setiosflags(ios_base::showpos);    //使用科学记数法
   cout<<"x = "<<x<<endl;
   cout<<resetiosflags(ios_base::showpos);   //清除科学记数法的标志
   cout<<"x = "<<x<<endl;
   return 0;
}
