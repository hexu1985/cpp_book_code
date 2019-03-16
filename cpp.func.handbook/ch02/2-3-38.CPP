#include<iostream.h>
#include<complex.h>

int main()
{
 double mag,angle;
 mag=1.0;
 angle=0.5;
 cout<<"The complex's magnitude is: "<<mag<<endl;
 cout<<"The complex's angle is: "<<angle<<endl;
 cout<<"The complex is: "<<polar(mag,angle)<<endl;
 return 0;
}
