#include <string>
#include <iostream>
using namespace std;

int main( ) 
{
  string str("abcde");
  basic_string <char>::size_type _pos,_num;
  const char *_ptr="1234";
  cout<<"str is: "<<str<<endl;
  _pos=1;
  _num=2;
  str.replace(_pos,_num,_ptr);  //��(_pos+1)λ��ʼɾ��str�������ַ�������_num��Ԫ�ز��뵽��λ�á�
  cout<<"After replace,str is: "<<str<<endl;

  return 0;
}