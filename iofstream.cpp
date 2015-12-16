#include "bits/stdc++.h"

using namespace std;

int main(int argc, char const *argv[])
{
	string to,from;
	cin>>from>>to;

	ifstream ifs{from};
	// istream_iterator<string> ist{ifs };
	// istream_iterator<string> eos{};

	ofstream ofs{to};
	ostream_iterator<string> ost{ofs,"\n"};

	vector<string>allword;
	string str;
	while(getline(ifs , str))
	{
		allword.push_back(str);
		// cout<<str<<endl;
	}
	//sort(allword.begin(), allword.end());

	auto f = find_if(allword.begin(), allword.end() , [](string a){return a=="asdf";});

	if(f!=allword.end()) cout<<"found "<<endl;
	else cout<<"not found"<<endl;

	copy(allword.begin(), allword.end() , ost);
	return 0;
}