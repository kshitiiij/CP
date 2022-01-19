#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

main()
{
	map<ll,ll> mp;
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll c=0,x;
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			cout<<mp[i]<<endl;
		}
	}
}