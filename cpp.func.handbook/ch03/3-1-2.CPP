#include<iostream.h>
#include<conio.h>

int main()
{
   char str[20];
   int num;
   str[0]=15;
   cout<<"Please insert a string:";
   cgets(str);
   cout<<endl;
   num=str[1];
   cout<<num<<" characters are read"<<endl;
   cout<<"They are: "<<(str+2);
   return 1;
}
