#include<iostream.h>
#include<float.h>

int main()
{
   cout<<"The status before _fpreset call is: "<<_status87<<endl;
   _fpreset();
   cout<<"After _fpreset call the status is: "<<_status87<<endl;
   return 0;
} 
