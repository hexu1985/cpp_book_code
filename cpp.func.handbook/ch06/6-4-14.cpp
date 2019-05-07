#include <map>
#include <iostream>
using namespace std;

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
   multimap <int,int> ctr1;    //����һ��������Ϊ��ĸΪ'a'��multimap
   int i;
   for(i=0;i<=3;i++)ctr1.insert(pair <int,int>(i,i));  //��ctr1��ֵ  

   multimap <int,int> ctr2(ctr1);         //����һ����ctr1��ͬ��multimap����
   cout<<"The ctr2 is: ";     
   print(ctr2);               //��ӡctr2������ 
   cout<<endl;
   return 0;
}