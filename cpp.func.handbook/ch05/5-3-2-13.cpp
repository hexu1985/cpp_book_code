#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	char_traits <int>::char_type _Ch='a';
    char_traits <int>::int_type result;
	result=char_traits <int>::to_int_type(_Ch);   //��_Chת��Ϊint_type��
    cout<<"result = "<<result<<endl;
	return 0;
}
