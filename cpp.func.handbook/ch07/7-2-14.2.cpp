/*************************************************************************
�����ţ�7-2-14.2
������˵����ʹ��iter_swap��������������
 *************************************************************************/
#include<algorithm>
#include<iostream>
#include<string>

using namespace std;

void main()
{
  string x("Hello,world!");
  string y("Good Morning!");

  cout<<"x="<<x<<endl;
  cout<<"y="<<y<<endl;

  iter_swap(&x,&y);
  
  cout<<"After swap!"<<endl;
  cout<<"x="<<x<<endl;
  cout<<"y="<<y<<endl;
} 
