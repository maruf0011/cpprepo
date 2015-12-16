#include "bits/stdc++.h"

using namespace std;

template <typename T>
class LessThan
{
	private:
		const T value;
	public:
		LessThan(const T &v):value(v){};
		// ~LessThan();
		bool operator()(const T &x){return x<value;}
};


template<typename c,typename p>
int Count(const c& cc,p pp)
{
	int ret = 0;
	for(const auto &x: cc)
	{
		ret += pp(x);
	}
	return ret;
}


int main()
{
	LessThan<int>lti(13);

	cout<<lti(5)<<endl;
	const std::vector<int> v{2,3,4,23,4,5,33};
	cout<<Count(v , lti)<<endl;
	const int x = 13;
	cout<<Count(v , [&](const int p){return p<x;})<<endl;
	return 0;
}