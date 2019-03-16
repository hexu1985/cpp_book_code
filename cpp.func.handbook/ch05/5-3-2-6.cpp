#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	char_traits <char>::char_type ch1='a';
    char_traits <char>::char_type ch2='b';
	char_traits <char>::int_type int1;
	char_traits <char>::int_type int2;
	int1=char_traits <char>::to_int_type(ch1);
	int2=char_traits <char>::to_int_type(ch2);
    
	bool result;
	result=char_traits <char>::eq_int_type(int1,int2);  //将ch1和ch2比较是否相等
    if(result)
         cout<<"int1 is equal to int2"<<endl;
	else
		cout<<"int1 is not equal to int2"<<endl;

    return 0;
}
