/*************************************************************************
程序编号：7-3-8
程序功能说明：使用nth_element将容器中的第4个元素摆在适当的位置，使该元素
左边的所有元素都不大于右边的元素。
 *************************************************************************/
#include<vector>
#include<algorithm>
#include<iostream>
#include<functional>

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
   vector<int> vec(10);
   
   vec.clear();
   for(int i=0;i<10;++i)
	   vec.push_back(2*i+1);

   random_shuffle(vec.begin(),vec.end());//打乱次序

   cout<<"vec:";
   print(vec);

   cout<<"The element of position 4 is:"
	   <<*(vec.begin()+4)<<endl;

   nth_element(vec.begin(),vec.begin()+4,vec.end());//重新排列

   cout<<"After nth_element:\n";
   cout<<"vec:";
   print(vec);
} 
