/*************************************************************************
�����ţ�7-2-14.1
������˵����ʹ��swap��������������
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

  swap(x,y);
  
  cout<<"After swap!"<<endl;
  cout<<"x="<<x<<endl;
  cout<<"y="<<y<<endl;
} 
