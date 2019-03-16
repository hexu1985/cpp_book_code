#include<iostream.h>
#include<stdlib.h>

int main()
{
   ldiv_t result;
   long number,denom;
   number=654321;
   denom=123456;
   cout<<number<<" divided by "<<denom<<":"<<endl;
   result=ldiv(number,denom);
   cout<<"its quotient is:"<<result.quot<<endl;
   cout<<"its remainder is:"<<result.rem<<endl;
   return 0;
}
