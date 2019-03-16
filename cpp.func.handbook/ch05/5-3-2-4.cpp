#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	int result;
	result=char_traits <int>::eof();
    cout<<"The EOF is: "<<result<<endl;
    return 0;
}
