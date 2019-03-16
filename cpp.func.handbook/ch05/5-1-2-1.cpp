#include <iostream>
#include <iomanip>
using namespace std;

int main( ) 
{
   double x=1234.56789;     
   cout<<setiosflags(ios_base::scientific);
   cout<<"x = "<<x<<endl;
   cout<<resetiosflags(ios_base::scientific);
   cout<<"x = "<<x<<endl;
   return 0;
}
