#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>
#include <ctype.h>

using namespace std;

//定义一个类
class CharVals
{
protected:   
   char val;//私有成员
public:
   CharVals()//构造函数
   { 
	   val=NULL;
   }

   CharVals(char ch)//构造函数
   {
	   val=ch;
   }

   bool display()//显示数据
   {
	   cout<<val<<" ";
	   return true;
   }

   bool isAlpha()
   {
	   return (bool) (isalpha(val));//判断是否为字母
   }

   bool isNum() 
   {
      return (bool) (isdigit(val));//判断是否为数字
   }
};

int main( )
{
   vector <CharVals> v1(14), v2(14);
   vector <CharVals>::iterator v1_Iter, v2_Iter;
   int i, k;

   //初始化
   for(i=0;i<7;i++)
   {
	   v1[i]=CharVals('a'+i);
	   v2[i]=CharVals('z'-i);
   }
   
   //初始化
   for(k=7;k<14;k++)
   {
	  v1[k]=CharVals('0'+k-7);	  
	  v2[k]=CharVals('9'-k+7);
   }
   
   random_shuffle(v1.begin(),v1.end());//打乱次序
   random_shuffle(v2.begin(),v2.end());//打乱次序
   cout << "The original values stored in v1 are: " ;
   for_each( v1.begin( ), v1.end( ), 
   mem_fun_ref ( &CharVals::display ) );//显示数组1
   cout << endl;

   //使用mem_fun_ref调用其中的函数isNum删除v1中的数字   
   v1_Iter=remove_if(v1.begin( ),v1.end( ), 
      mem_fun_ref(&CharVals::isNum));  
   
   cout<<"With the digits removed, the remaining values in v1 are:\n";
   for_each(v1.begin( ), v1_Iter, 
   mem_fun_ref ( &CharVals::display ) );//显示删除数字后的v1
   cout<<endl;

   cout<<"The original values stored in v2 are:\n";
   for_each(v2.begin( ),v2.end( ), 
   mem_fun_ref(&CharVals::display)); //显示数组2
   cout<< endl;

   //使用mem_fun_ref调用其中的isAlpha函数删除v2中的字母  
   v2_Iter = remove_if (v2.begin(),v2.end( ), 
      mem_fun_ref (&CharVals::isAlpha));   
   cout<<"With the alphabets removed, the remaining values are:";
   for_each(v2.begin(),v2_Iter, 
   mem_fun_ref(&CharVals::display)); //显示删除字母后的v2
   cout<<endl;

   return 1;
}
