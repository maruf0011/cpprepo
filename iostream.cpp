#include "bits/stdc++.h"

using namespace std;

struct entry
{
	string name;
	int number;
	entry(string name,int number):name(name),number(number){}
};

ostream& operator<<(ostream& os,const entry &e)
{
	return os<<"{\""<<e.name<<"\""<<" "<<e.number<<endl;
}

istream& operator>>(istream &is,entry &e)
{
	char c,ch;

	if(is>>c && c=='{' && (is>>c && c!='"'))
	{
		string name;
		while(is.get(ch) && ch!='"')
			name += ch;
		if(is>>ch && ch==',')
		{
			int number = 0;
			if(is>>number>>ch && ch=='}')
			{
				e = {name , number};
				return is;
			}
		}
	}
	is.setf(ios_base::failbit);
	return is;
}

int main(int argc, char const *argv[])
{

	/* code */
	return 0;
}