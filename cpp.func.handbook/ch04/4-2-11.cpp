#include<iostream.h>
#include<time.h>

int main()
{
   tm t;
   t.tm_hour=1;
   t.tm_isdst=0;
   t.tm_mday=1;
   t.tm_min=1;
   t.tm_mon=1;
   t.tm_sec=1;
   t.tm_year=102;
   mktime(&t);
   cout<<"wm_wday = "<<t.tm_year<<endl;
   cout<<"wm_yday = "<<t.tm_yday<<endl;
   return 0;
}
