#include<iostream.h>
#include<math.h>

int main()
{
 double x,y;
 long double lx,ly;
 x=3.0;
 y=4.0;
 cout<<"The hypotenuse with sides "<<x<<" and "<<y<<" is: "<<hypot(x,y)<<endl;
 lx=123456;
 ly=654321;
 cout<<"The hypotenuse with sides "<<lx<<" and "<<ly<<" is: "<<hypot(lx,ly)<<endl;
 return 0;
}
