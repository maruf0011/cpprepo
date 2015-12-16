#include "Vector.h"
#include <iostream>

using namespace std;


template<typename _c,typename _v>
_v __sum(_c& cc,_v vv)
{
	for(auto &x: cc)
	{
		vv += x;
	}
	return vv;
}


void use(Container<int> &c)
{
	for(auto &x: c)
		cout<<"parent "<<x<<endl;
}

int main()
{
	Vector<int> v = {1,2,3,4,5};
	Vector_Container<int> vc(5);
	double sum = 0.0;
	for (int i = 0; i < vc.size(); ++i)
	{
		vc[i] = i+1;
	}

	Vector<int> v2 = v;

	v2[0] = 6;
	cout<<v[0]<<endl;

	use(vc);
	cout<<__sum(vc , (int)0)<<endl;
	return 0; 
}