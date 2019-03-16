#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>

int main(int argc,char *argv[],char *envp[])
{
  unsigned ID;
  ID=getpid();
  cout<<"The program's ID is: "<<ID<<endl;
  return 0;
}
