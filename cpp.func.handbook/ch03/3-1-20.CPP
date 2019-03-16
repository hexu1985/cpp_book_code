#include<iostream.h>
#include<stdio.h>

int main()
{
  FILE *stream;
  char str[20];
  stream=fopen("ferror.txt","w");
  fgets(str,3,stream);
  if(ferror(stream)!=0)
  {
	  cout<<"Some error occcur !"<<endl;
      cout<<"Now Resetting all the error indicator"<<endl;
	  clearerr(stream);
  }
  else
  {
	  cout<<"Success!"<<endl;
  }
  fclose(stream);
  return 0;
}
