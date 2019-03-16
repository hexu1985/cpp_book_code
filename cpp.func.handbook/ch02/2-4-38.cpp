#include<iostream.h>
#include<string.h>

int main()
{
   char target[20]="This is an example";
   char source[20]="That";
   cout<<"There are "<<strxfrm(target,source,3)<<" characters are transformed"<<endl;
   cout<<"After transformed,the target is:"<<endl;
   cout<<target<<endl;
   return 0;
}  
