#include<iostream.h>
#include<math.h>

int main()
{
 double x,ipart;
 long double xl,ipartl;
 x=123.456;
 xl=654321.123456;
 cout<<"The fractional part of "<<x<<" is: "<<modf(x,&ipart)<<endl;
 cout<<"The interger part of "<<x<<" is: "<<ipart<<endl;
 cout<<"The fractional part of 654321.123456 is: "<<modfl(xl,&ipartl)<<endl;
 cout<<"The interger part of 654321.123456 is: "<<ipartl<<endl;
 return 0;
}
