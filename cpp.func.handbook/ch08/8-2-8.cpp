#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>
#include <ctype.h>

using namespace std;

//����һ����
class CharVals
{
protected:   
   char val;//˽�г�Ա
public:
   CharVals()//���캯��
   { 
	   val=NULL;
   }

   CharVals(char ch)//���캯��
   {
	   val=ch;
   }

   bool display()//��ʾ����
   {
	   cout<<val<<" ";
	   return true;
   }

   bool isAlpha()
   {
	   return (bool) (isalpha(val));//�ж��Ƿ�Ϊ��ĸ
   }

   bool isNum() 
   {
      return (bool) (isdigit(val));//�ж��Ƿ�Ϊ����
   }
};

int main( )
{
   vector <CharVals> v1(14), v2(14);
   vector <CharVals>::iterator v1_Iter, v2_Iter;
   int i, k;

   //��ʼ��
   for(i=0;i<7;i++)
   {
	   v1[i]=CharVals('a'+i);
	   v2[i]=CharVals('z'-i);
   }
   
   //��ʼ��
   for(k=7;k<14;k++)
   {
	  v1[k]=CharVals('0'+k-7);	  
	  v2[k]=CharVals('9'-k+7);
   }
   
   random_shuffle(v1.begin(),v1.end());//���Ҵ���
   random_shuffle(v2.begin(),v2.end());//���Ҵ���
   cout << "The original values stored in v1 are: " ;
   for_each( v1.begin( ), v1.end( ), 
   mem_fun_ref ( &CharVals::display ) );//��ʾ����1
   cout << endl;

   //ʹ��mem_fun_ref�������еĺ���isNumɾ��v1�е�����   
   v1_Iter=remove_if(v1.begin( ),v1.end( ), 
      mem_fun_ref(&CharVals::isNum));  
   
   cout<<"With the digits removed, the remaining values in v1 are:\n";
   for_each(v1.begin( ), v1_Iter, 
   mem_fun_ref ( &CharVals::display ) );//��ʾɾ�����ֺ��v1
   cout<<endl;

   cout<<"The original values stored in v2 are:\n";
   for_each(v2.begin( ),v2.end( ), 
   mem_fun_ref(&CharVals::display)); //��ʾ����2
   cout<< endl;

   //ʹ��mem_fun_ref�������е�isAlpha����ɾ��v2�е���ĸ  
   v2_Iter = remove_if (v2.begin(),v2.end( ), 
      mem_fun_ref (&CharVals::isAlpha));   
   cout<<"With the alphabets removed, the remaining values are:";
   for_each(v2.begin(),v2_Iter, 
   mem_fun_ref(&CharVals::display)); //��ʾɾ����ĸ���v2
   cout<<endl;

   return 1;
}
