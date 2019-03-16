#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	char_traits <char>::char_type *str1="abc";
    char_traits <char>::char_type *str2="abd";
    
	int result;
	result=char_traits <char>::compare(str1,str2,3);
	if(result==0)
		cout<<"str1 = str2"<<endl;
	if(result<0)
		cout<<"str1 < str2"<<endl;
	if(result>0)
		cout<<"str1 > str2"<<endl;
    return 0;
}
