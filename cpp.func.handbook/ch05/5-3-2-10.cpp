#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
	char_traits <char>::char_type str1[100]="abcefg";
    char_traits <char>::char_type str2[100]="1234";
	char_traits <char>::char_type *result;
    
    result=char_traits <char>::move(str1,str2,3);  //��str2��3��Ԫ�ظ��Ƶ�str1��ȥ
	cout<<"result = "<<result<<endl;
	cout<<"str1 = "<<str1<<endl;
	cout<<"str2 = "<<str2<<endl;
    return 0;
}
