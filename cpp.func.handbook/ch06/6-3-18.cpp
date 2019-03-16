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
   map <int,int> ctr1, ctr2;
   map <int,int>::const_iterator cp;
   
   int i;
   for(i=0;i<3;i++)     //������ȸ�ctr1��ctr2��ֵ
   {
	   ctr1.insert(pair <int,int>(i,i));
	   ctr2.insert(pair <int,int>(i,i+10)); 
   }

   cout<<"Before exchange with ctr2 the ctr1 is:";
   print(ctr1);                        //�����ӳ��򣬰�ctr2��ӡ����
   cout<<endl;
   
   cout<<"After exchange with ctr2 the ctr1 is:";   
   ctr1.swap(ctr2);          //��ctr1��������ctr2����
   print(ctr1);               //�����ӳ��򣬰�ctr1��ӡ����
   cout<<endl;

   return 0;
}
