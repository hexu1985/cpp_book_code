#include <map>
#include <iostream>
using namespace std;
#define len 5

int print_one_item(multimap <int,int>::const_iterator cp)   //���ڴ�ӡmultimap��һ��Ԫ��
{
	cout<<"("<<cp->first<<" , "<<cp->second<<") ";
	return 0;
}

int print(multimap <int,int> c)       //���ڴ�ӡһ��multimap����
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
   
   int i;
   for(i=0;i<len;i++)ctr.insert(pair <int,int>(i,i));    //������ȸ�ctr��ֵ

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   

   cp=ctr.find(2);         //����key=2��Ԫ��
   if(cp!=ctr.end())         //�ҵ�ʱ����ӡ����
   {
	   cout<<"The element whose key = 2 is:";
	   print_one_item(cp);
	   cout<<endl;
   }
   else              //�Ҳ���ʱ
	   cout<<"There is no element whose key = 2"<<endl;
   return 0;
}