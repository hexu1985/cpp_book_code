#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	char_traits <char>::char_type ch1='a';
    char_traits <char>::char_type ch2='b';
    
	bool result;
	result=char_traits <char>::lt(ch1,ch2);  //比较ch1是否小于ch2
    if(result)
         cout<<"ch1 < ch2"<<endl;
	else
		cout<<"ch1 >= ch2"<<endl;

    return 0;
}
