#include<iostream.h>
#include<io.h>

int main()
{
   char *filename;
   filename="exist?";    
   cout<<"Does the file <"<<filename<<"> exist?"<<endl;
   cout<<"The answer is: ";
   if(!access(filename,0))
	   cout<<"YES"<<endl;
   else 
	   cout<<"No"<<endl;
   return 1;
}
