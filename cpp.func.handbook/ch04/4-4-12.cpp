#include<iostream.h>
#include<signal.h>

int main()
{
  int sig;
  int i;
  cout<<"Enter the singal :"<<endl;
  cout<<"SIGABRT: press 1"<<endl;
  cout<<"SIGFPE: press 2"<<endl;
  cout<<"SIGILL: press 3"<<endl;
  cout<<"SIGINT: press 4"<<endl;
  cout<<"SIGSEGV: press 5"<<endl;
  cout<<"SIGTERM: press 6"<<endl;
  cin>>i;
  switch(i)
  {
  case 1:sig=SIGABRT;break;
  case 2:sig=SIGFPE;break;
  case 3:sig=SIGILL;break;
  case 4:sig=SIGINT;break;
  case 5:sig=SIGSEGV;break;
  case 6:sig=SIGTERM;break;
  default:cout<<"You press the wrong key"<<endl;return 1;		  
  }
  raise(sig);
  return 0;
}
