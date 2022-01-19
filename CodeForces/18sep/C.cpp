#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i;


int main()
{
	cin>>t;
	while(t--)
	{
		vector<int> chap;
		vector<pair(int,vector<int>)> vec;
		
		cin>>n;
		ll k,a;
		for(i=0;i<n;i++)
		{
			cin>>k;
			for(ll j=0;j<k;j++) {
				cin>>a;
				chap.push_back(a);
			}
			//vec.push_back(k);
			vec.push_back(make_pair(k,chap));
			chap.clear();
		}
		
	}

	return 0;
}