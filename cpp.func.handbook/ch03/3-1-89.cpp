#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<io.h>
#include<dos.h>

int main()
{
   int func;
   creatnew("_chmod.txt",FA_RDONLY);
   func=_chmod("_chmod.txt",0,FA_RDONLY);
   switch(func)
   {
   case FA_RDONLY:cout<<"FA_RDONLY";break;
   case FA_HIDDEN:cout<<"FA_HIDDEN";break;
   case FA_SYSTEM:cout<<"FA_SYSTEM";break;
   case FA_LABEL:cout<<"FA_LABEL";break;
   case FA_DIREC:cout<<"FA_DIREC";break;
   }
   return 0;
}
