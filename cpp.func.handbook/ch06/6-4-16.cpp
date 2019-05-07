#include <map>
#include <iostream>

using namespace std;

#define len 5

int print_one_item(multimap <int,int>::const_iterator cp)   //���ڴ�ӡmultimap��һ��Ԫ��
{
	cout<<"("<<cp->first<<" , "<<cp->second<<") ";
	return 0;
}

int print(multimap <int,int> c)       //���ڴ�ӡһ��multimap
{
    multimap <int,int>::const_iterator cp;
    for(cp=c.begin();cp!=c.end();cp++)   //��cp��c�Ŀ�ʼ��������ӡcp��Ӧ��ֵ       
           print_one_item(cp);         //�����ӳ�������ӡһ��Ԫ��
	  return 0;
}

int main( ) 
{
   multimap <int,int> ctr;
   multimap <int,int>::iterator cp; 
   multimap <int,int>::reverse_iterator rcp;
   int i;
   for(i=0;i<len;i++)ctr.insert(pair <int,int>(i,i));    //������ȸ�ctr��ֵ

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"Its reverse is:";
   for(rcp=ctr.rbegin();rcp!=ctr.rend();rcp++)   //��ӡ������multimap����
	   cout<<"("<<rcp->first<<" , "<<rcp->second<<") ";
   cout<<endl;
   return 0;
}