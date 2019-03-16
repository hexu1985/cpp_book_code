#include <map>
#include <iostream>
using namespace std;

int print_one_item(map <int,int>::const_iterator cp)
{
	cout<<"("<<cp->first<<" , "<<cp->second<<") ";
	return 0;
}

int print(map <int,int> c)       //���ڴ�ӡһ��map
{
    map <int,int>::const_iterator cp;
	for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
    print_one_item(cp);
	return 0;
}

int main( ) 
{
   map <int,int> ctr;
   pair <map <int,int>::const_iterator, map <int,int>::const_iterator> p;
   int i;
   for(i=0;i<=3;i++)ctr.insert(pair <int,int>(i,i));  //��ctr��ֵ
   cout<<"The ctr is: ";
   print(ctr);          //�����ӳ�������ӡctr������ 
   cout<<endl;

   p=ctr.equal_range(2);
   if(p.first!=ctr.end())
   {
	   cout<<"The first element which key >= 2 is: ";
	   print_one_item(p.first);
	   cout<<endl;
   }
   if(p.second!=ctr.end())
   {
	   cout<<"The first element which key > 2 is: ";
	   print_one_item(p.second);
	   cout<<endl;
   }
   return 0;
}
