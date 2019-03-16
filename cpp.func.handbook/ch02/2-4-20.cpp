#include<iostream.h>
#include<string.h>

int main()
{
   char *error_info;
   error_info=strerror(1);
   cout<<error_info<<endl;
   return 0;
}
