#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

class CharVals   
{
protected:   
char val;//私有数据成员

public:
   CharVals( )//构造函数
   { 
	   val = NULL; 
   }

   CharVals(char ch)//构造函数
   {
	   val=ch;
   }

   bool display()//显示数据
   { 
	   cout << val << " "; 
	   return true;
   }

   char shift_left(int k)//左移函数
   { 
	   val-=k;
	   return val;
   }

   char shift_right(int k) //右移函数
   {
	   val+=k;
	   return val;
   }
};

int main( )
{
   vector <CharVals *> v1;
   
   //初始化
   v1.push_back(&CharVals('h'));
   v1.push_back(&CharVals('i'));
   v1.push_back(&CharVals('j'));
   v1.push_back(&CharVals('k'));
   v1.push_back(&CharVals('l'));

   cout << "The original values Char are: " ;
   for_each(v1.begin(),v1.end(),
	   mem_fun<bool, CharVals>(&CharVals::display));//显示数组1
   cout<< endl;

   for_each(v1.begin(), v1.end(),
	  bind2nd(mem_fun1<char, CharVals,int>(&CharVals::shift_left),3)); //左移3  
   cout<<"After shift_left(3) the values of v1:";
   for_each(v1.begin(),v1.end(),
	   mem_fun<bool,CharVals>(&CharVals::display));//显示左移结果
   cout<< endl;

   for_each(v1.begin(), v1.end(), 
      bind2nd(mem_fun1<char, CharVals,int>(&CharVals::shift_right),9)); //右移9  
   cout<<"After shift_right(5) the values of v1:";
   for_each(v1.begin(),v1.end(), 
	   mem_fun<bool, CharVals>(&CharVals::display));//显示右移结果
   cout<<endl;

   return 1;
}
