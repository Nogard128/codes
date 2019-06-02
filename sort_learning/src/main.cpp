/*************************************************************************
	> File Name: main.cpp
	> Author: Xu
	> Created Time: 2019年05月31日 星期五 19时29分33秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include"ID.h"
using namespace std;
void show( vector<ID>& x )
{
	vector<ID>::iterator iter;
	iter = x.begin();
	while(iter != x.end())
	{
		cout << (*iter).getname() << " ---" << (*iter).getscore() <<endl;
		iter++;
	}
}
void show( vector<int>& x)
{

	vector<int>::iterator iter;
	iter =x.begin();
	while(iter != x.end())
	{
		cout << *iter << "  ";
		iter++;
	}
	cout <<endl;
}
// 出现两个compare会报错
/*bool compare (int a,int b)     
{	
	return a>b;
}*/
bool compare (ID x,ID y )
{

	return x.getscore()>y.getscore();
}

int main()
{
	vector<ID> ids;
	vector<int>  nums;
	nums.push_back(1);
	nums.push_back(5);
	nums.push_back(3);
	nums.push_back(16);
	nums.push_back(14);
	nums.push_back(9);
	nums.push_back(35);
	ids.push_back(ID("Tom",59));
	ids.push_back(ID("Jack",87));
	ids.push_back(ID("Zed",23));
	ids.push_back(ID("Zoe",46));
	show(ids);
	cout<<"----------------------"<<endl;
	sort(ids.begin(),ids.end(),compare);
	show(ids);
	cout<<"----------------------"<<endl;
	ids.push_back(ids[2]+ids[3]);
	show(ids);
	cout<<ids[2].getname()<<"--"<<ids[2].getscore()<<endl;
	cout<<ids[3].getname()<<"--"<<ids[3].getscore()<<endl;
	if (ids[2]==ids[3]) cout<< "=="<<endl;
	else cout<< "!="<<endl;
	if (ids[2]<ids[3]) cout<< "<"<<endl;
	else cout<< ">"<<endl;
	return 0 ; 
}


