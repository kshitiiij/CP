//Lecture
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll t,n,h,m,i,j;

int main()
{
	cin>>n>>m;
	string a,b;
	vector< pair<string, string> > v;
	vector<string> s;
	
	for(i=0;i<m;i++) {
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}

	for(i=0;i<n;i++) {
		cin>>a;
		s.push_back(a);
	}

	for(i=0;i<s.size();i++) {

		for(j=0;j<m;j++) {
			if(v[j].first == s[i])
				break;
		}

		if(v[j].first.length()<=v[j].second.length())
			cout<<v[j].first<<" ";
		else
			cout<<v[j].second<<" ";
	}
	cout<<endl;
	return 0;

}