#include <string>
#include <iostream>
using namespace std;

int main( ) 
{ 
  string A("This is a test of clog");
  string B("\n");
  clog<<A<<B;	  
  return 0;
}
