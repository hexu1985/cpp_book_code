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
  str.replace(_pos,_num,_ptr);  //从(_pos+1)位开始删除str的两个字符，并将_num个元素插入到该位置。
  cout<<"After replace,str is: "<<str<<endl;

  return 0;
}