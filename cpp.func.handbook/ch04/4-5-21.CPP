#include<iostream.h>
#include<dos.h>

int main()
{
	diskfree_t dtable;
	unsigned char drive;
	drive=3;
	_dos_getdiskfree(drive,&dtable);
	cout<<"The avail clusters in c: "<<dtable.avail_clusters<<endl;
	cout<<"The total clusters in c: "<<dtable.total_clusters<<endl;
	cout<<"The bytes per sector in c: "<<dtable.bytes_per_sector<<endl;
	cout<<"The sectors per cluster in c: "<<dtable.sectors_per_cluster<<endl;
	return 0;
}
