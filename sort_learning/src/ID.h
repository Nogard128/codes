/*************************************************************************
	> File Name: ID.h
	> Author: Xu
	> Created Time: 2019年05月31日 星期五 19时22分20秒
 ************************************************************************/
//重载运算符声明const报错
#ifndef _ID_H_
#define _ID_H_  
#include<string>
using namespace std;
class ID{

	
	public:
		ID(string n,int x):name(n),score(x){};
		int getscore();
		string getname();
		void setname(string n );
		bool  operator == (ID& x);
		bool  operator < ( ID& x);
		ID  operator + ( ID& x);
	private:
		int score;
		string name;

};



#endif


