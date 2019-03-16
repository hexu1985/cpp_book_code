#include<iostream.h>
#include<float.h>

int main()
{
   cout<<"The status before clear is: "<<_control87(0,0)<<endl;
   cout<<"After clear the status is: "<<_control87(2,1)<<endl;
   return 0;
} 
