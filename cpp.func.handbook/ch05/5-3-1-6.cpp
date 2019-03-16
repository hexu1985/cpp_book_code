#include <string>
#include <iostream>

using namespace std;

int main( ) 
{
   string str1("abcd");
   char str2[10];
   strcpy(str2,str1.c_str());
   cout<<"The str2 is: "<<str2<<endl;

   return 0;
}
