#include <iostream>
#include <iomanip>
using namespace std;

int main( ) 
{
   int x=1234;     
   cout<<setiosflags(ios_base::showpos);    //ʹ�ÿ�ѧ������
   cout<<"x = "<<x<<endl;
   cout<<resetiosflags(ios_base::showpos);   //�����ѧ�������ı�־
   cout<<"x = "<<x<<endl;
   return 0;
}
