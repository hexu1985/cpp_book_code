#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	char_traits <char>::int_type _Ch=65;
    char_traits <char>::char_type result;
	result=char_traits <char>::to_char_type(_Ch);
    cout<<"result = "<<result<<endl;
	return 0;
}
