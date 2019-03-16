#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>
#include <iostream>

using namespace std;

int main( )
{
   char* a[5]={"hello","hi","how are you?","thank you","bye"};
   //��ʼ��
vector <char*> v1(a,a+5);
   vector <char*>::iterator Iter1, Result;
 
   cout<< "Original sequence contains:";
   for(Iter1 = v1.begin(); Iter1!=v1.end();Iter1++)
      cout<< *Iter1 << " ";//��ʾ����
   cout<< endl;
 
   //ʹ��ptr_fun�ҳ��ַ���
   Result=find_if(v1.begin(),v1.end(),
      not1(bind2nd(ptr_fun(strcmp),"thank you")));

   if(Result!=v1.end())  
   {
      cout<<"The search for 'thank you' was successful.\n";//�ҵ��ַ���
      cout<<"The next character string is:" //��ʾ�¸��ַ���
          <<*++Result << "." << endl;
   }

   return 1;
}
