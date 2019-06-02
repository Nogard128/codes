/*************************************************************************
	> File Name: ID.cpp
	> Author: Xu
	> Created Time: 2019年05月31日 星期五 19时26分35秒
 ************************************************************************/

#include"ID.h"

int ID::getscore()
{
	return score;
}

string ID::getname()
{
	return name;
}
void ID::setname(string n )
{
	name=n;
}
bool  ID::operator == (ID& x)
{
	return (x.getname()==getname())&&(x.getscore()==getscore());
};
bool ID::operator < ( ID& x)
{
	return x.getscore()>getscore();
};
ID ID::operator + ( ID& x)
{
	return ID((x.getname()+getname()),x.getscore()+getscore());
};




