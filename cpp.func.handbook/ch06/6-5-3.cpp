#include <set>
#include <iostream>

int main( ) 
{
   using namespace std;
   multiset <char> ctr;
   ctr.insert('a');
   ctr.insert('b');
   ctr.insert('a');
   int i;
   i=ctr.count('a');           //求出关键字为字符'a'的元素的个数。
   if(i==0)
	   cout<<"There is no such key!"<<endl;
   else
	   cout<<"The number of key is: "<<i<<endl;
   return 0;
}
