/*************************************************************************
�����ţ�7-3-7
������˵����ʹ��next_permutation�ҳ���һ������ʽ��
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
   vector<int> vec(5);
   
   vec.clear();
   for(int i=0;i<5;++i)
	   vec.push_back(2*i+1);
   cout<<"vec:";
   print(vec);
   next_permutation(vec.begin(),vec.end());//��һ������ʽ
   cout<<"after first next_permutation:\n";
   print(vec);
   next_permutation(vec.begin(),vec.end());//��һ������ʽ
   cout<<"after another next_permutation:\n";
   print(vec);
   next_permutation(vec.begin(),vec.end());//��һ������ʽ
   cout<<"after another next_permutation:\n";
   print(vec);

   next_permutation(vec.begin(),vec.end());//��һ������ʽ
   cout<<"after another next_permutation:\n";
   print(vec);

next_permutation(vec.begin(),vec.end());//��һ������ʽ
   cout<<"after another next_permutation:\n";
   print(vec);

  next_permutation(vec.begin(),vec.end());//��һ������ʽ
   cout<<"after another next_permutation:\n";
   print(vec);
} 
