#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	char_traits <char>::char_type str[100]="abc123abc";
    size_t len;
	len=char_traits <char>::length(str);
	cout<<"The str's length is: "<<len<<endl;
    
    return 0;
}
