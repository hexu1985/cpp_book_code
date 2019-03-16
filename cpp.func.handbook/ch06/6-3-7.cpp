#include <map>
#include <iostream>
using namespace std;
#define len 5

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
   map <int,int>::iterator cp;
   
   int i;
   for(i=0;i<len;i++)ctr.insert(pair <int,int>(i,i));    //������ȸ�ctr��ֵ

   cout<<"ctr is:";
   print(ctr);                        //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   
   cout<<"After erase the second element  ctr is:"; 
   cp=ctr.begin();
   cp++;
   ctr.erase(cp);       //����ctr��cpλ�õ�Ԫ��
   print(ctr);          //�����ӳ��򣬰�ctr��ӡ����
   cout<<endl;
   return 0;
}
