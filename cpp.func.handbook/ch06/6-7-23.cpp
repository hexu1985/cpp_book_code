#include <vector>
#include <iostream>

int main( ) 
{
   using namespace std;
   vector <char> ctr(2);
   ctr[0]='a';
   ctr[1]='b';
   char &ch=ctr[1];                //_Pos=1Ê±µÄµØÖ·
   cout<<"ch = "<<ch<<endl;
   return 0;
}
