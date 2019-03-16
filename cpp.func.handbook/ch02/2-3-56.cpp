#include<iostream.h>
#include<stdlib.h>

int main()
{
   unsigned long x;
   int count;
   x=0x0010;
   count=4;
   cout<<"The value "<<x<<" to rotated right "<<count<<" bits is: "<<_lrotr(x,count)<<endl;
   return 0;
}
