#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll t,n;

main()
{
	cin>>t;
	while(t--)
	{
		map <ll,ll> ar;
		cin>>n;
		ll num;
		ll pair=0;
		for(ll i=0;i<n;i++)
		{
			cin>>num;
			pair += ar[num-i];
			ar[num-i]++;
		}
		cout<<pair<<endl;
	}
}