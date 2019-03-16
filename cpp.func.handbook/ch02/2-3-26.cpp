#include<iostream.h>
#include<math.h>

int main()
{
 double x1,y1;
 x1=5.1;
 y1=2.1;
 cout<<x1<<" modulo "<<y1<<" is:"<<fmod(x1,y1)<<endl;
 long double x2,y2;
 x2=654321;
 y2=123456;
 cout<<x2<<" modulo "<<y2<<" is:"<<fmod(x2,y2)<<endl;
 return 0;
}
