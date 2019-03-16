#include<iostream.h>
#include<stdio.h>

int main()
{
  FILE *stream1,*stream2;
  stream1=fopen("temp.txt","r");
  stream2=fopen("temp2.txt","w");
  int num;
  num=flushall();
  cout<<"There "<<num<<" streams has flushed"<<endl;
  fclose(stream1);
  fclose(stream2);
  return 0;
}
