#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	char_traits <char>::int_type _Ch=1;
	char_traits <char>::int_type result;
    result=char_traits <char>::not_eof(_Ch);       //ȡ��eof��ֵ
    if(result)
	   cout<<"_Ch is not the EOF character"<<endl;
   else
       cout<<"_Ch is the EOF character"<<endl;
   return 0;
}
