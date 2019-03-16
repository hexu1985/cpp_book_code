/*************************************************************************
程序编号：7-4-1
程序功能说明：使用accumulate求和与积。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>
#include<numeric>

using namespace std;

void print(vector<int> vec)
{
	vector<int>::iterator iter;
	for(iter=vec.begin();iter!=vec.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
}

void main()
{
   int a[10]={20,25,30,35,40,45,50,55,60,65};
   int b[10]={1,3,2,7,4,5,10,11,15,8};
   vector<int> vec1(a,a+10);
   vector<int> vec2(b,b+10);
   int total_add,total_mul;
   
   total_add=accumulate(vec1.begin(),vec1.end(),0); //第1个数组的所有元素的和 
   cout<<"vec1:";
   print(vec1);
   cout<<"The sum of all integers in vec1 is:";
   cout<<total_add;
   cout<<endl;

   total_mul=accumulate(vec2.begin(),vec2.end(),1,multiplies<int>()); //第2个数组的所有元素的积
   cout<<"vec2:";
   print(vec2);
   cout<<"The product of all integers in vec2 is:";
   cout<<total_mul;
   cout<<endl;   
} 
