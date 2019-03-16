#include<iostream.h>
#include<stdlib.h>

int main()
{
   div_t result;
   int number,denom;
   number=2002;
   denom=123;
   cout<<number<<" divided by "<<denom<<":"<<endl;
   result=div(number,denom);
   cout<<"its quotient is:"<<result.quot<<endl;
   cout<<"its remainder is:"<<result.rem<<endl;
   return 0;
}
