#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

class CharVals   
{
protected:   
char val;//˽�����ݳ�Ա

public:
   CharVals( )//���캯��
   { 
	   val = NULL; 
   }

   CharVals(char ch)//���캯��
   {
	   val=ch;
   }

   bool display()//��ʾ����
   { 
	   cout << val << " "; 
	   return true;
   }

   char shift_left(int k)//���ƺ���
   { 
	   val-=k;
	   return val;
   }

   char shift_right(int k) //���ƺ���
   {
	   val+=k;
	   return val;
   }
};

int main( )
{
   vector <CharVals *> v1;
   
   //��ʼ��
   v1.push_back(&CharVals('h'));
   v1.push_back(&CharVals('i'));
   v1.push_back(&CharVals('j'));
   v1.push_back(&CharVals('k'));
   v1.push_back(&CharVals('l'));

   cout << "The original values Char are: " ;
   for_each(v1.begin(),v1.end(),
	   mem_fun<bool, CharVals>(&CharVals::display));//��ʾ����1
   cout<< endl;

   for_each(v1.begin(), v1.end(),
	  bind2nd(mem_fun1<char, CharVals,int>(&CharVals::shift_left),3)); //����3  
   cout<<"After shift_left(3) the values of v1:";
   for_each(v1.begin(),v1.end(),
	   mem_fun<bool,CharVals>(&CharVals::display));//��ʾ���ƽ��
   cout<< endl;

   for_each(v1.begin(), v1.end(), 
      bind2nd(mem_fun1<char, CharVals,int>(&CharVals::shift_right),9)); //����9  
   cout<<"After shift_right(5) the values of v1:";
   for_each(v1.begin(),v1.end(), 
	   mem_fun<bool, CharVals>(&CharVals::display));//��ʾ���ƽ��
   cout<<endl;

   return 1;
}
