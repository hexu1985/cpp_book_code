#include <map>
#include <iostream>
using namespace std;

int print_one_item(map <int,int>::const_iterator cp)   //���ڴ�ӡmap��һ��Ԫ��
{
	cout<<"("<<cp->first<<" , "<<cp->second<<") ";
	return 0;
}

int print(map <int,int> c)       //���ڴ�ӡһ��map
{
    map <int,int>::const_iterator cp;
for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
           print_one_item(cp);         //�����ӳ�������ӡһ��Ԫ��
	  return 0;
}

int main( ) 
{
   map <int,int> ctr;
   map <int,int>::const_iterator cp;
   int i;
   for(i=0;i<=3;i++)ctr.insert(pair <int,int>(i,i));  //��ctr��ֵ
   cout<<"The ctr is: ";
   print(ctr);          //�����ӳ�������ӡctr������ 
   cout<<endl;

   cp=ctr.upper_bound(2);
   if(cp!=ctr.end())
   {
	   cout<<"The first element which key > 2 is: ";
	   print_one_item(cp);              //�����ӳ�������ӡһ�
	   cout<<endl;
   }
   return 0;
}
