#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	char_traits <char>::char_type ch1='a';
    char_traits <char>::char_type ch2='b';
    
	bool result;
	result=char_traits <char>::eq(ch1,ch2);  //��str1��str2��ǰ3��Ԫ�رȽ�
    if(result)
         cout<<"ch1 is equal to ch2"<<endl;
	else
		cout<<"ch1 is not equal to ch2"<<endl;

    return 0;
}
