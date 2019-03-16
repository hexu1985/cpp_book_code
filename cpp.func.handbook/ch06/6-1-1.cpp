#include <deque>
#include <iostream>
using namespace std;

int print(deque <int> c)
{
    deque <int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)
		cout<<*cp<<" ";
	return 0;
}

int main( ) 
{
   deque <int> ctr1(3), ctr2(3);
   deque <int>::const_iterator cp;
   
   int i;
   for(i=0;i<3;i++)
   {
	   ctr1[i]=i;
	   ctr2[i]=i+10;
   }

   cout<<"Before assign ctr2 is:";
   print(ctr2);
   cout<<endl;
   
   cout<<"After the first assign ctr2 is:";
   ctr2.assign(ctr1.begin(),ctr1.end());
   print(ctr2);
   cout<<endl;

   cout<<"After the second assign ctr2 is:";
   ctr2.assign(2,5);
   print(ctr2);
   cout<<endl;
   return 0;
}