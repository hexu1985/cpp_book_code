#include<iostream.h>
#include<dos.h>

int main()
{
    time timep;
    gettime(&timep);
    cout<<"Now the minutes is: "<<timep.ti_min<<endl;
    cout<<"Now the hour is: "<<timep.ti_hour<<endl;
    cout<<"Now the hund is: "<<timep.ti_hund<<endl;
    cout<<"Now the sec is: "<<timep.ti_sec<<endl;
    return 0;
}
