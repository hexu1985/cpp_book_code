#include<iostream.h>
#include<conio.h>

int main()
{
  char *prompt="Please insert a password:";
  char *password;
  password=getpass(prompt);
  cout<<"The password you enter is: "<<password<<endl;
  return 0;
}
