#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	char_traits <char>::char_type str[100]="abc123abc";
    char_traits <char>::char_type _ch='b';
    const char *result;
	result=char_traits <char>::find(str,2,_ch);
	if(result)
		cout<<"The result is: "<<result<<endl;
	else
		cout<<"The character is not found"<<endl;
  return 0;
}
