#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,i;
int main()
{
	cin>>t;
	while(t--)
	{
		ll l,r;
		cin>>n>>l>>r;
		ll arr[n];
		
		for(i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		vector< pair<ll,ll>> v;
		ll left,right;
		for(i=0;i<n;i++)
		{
			right = r - arr[i]; 
			left = l - arr[i];
			// cout<<right<<" "<<left<<endl;
			//range[i] = right - left;
			v.push_back( make_pair(left,right));
		}
		ll pairs=0;
		ll point = 0;
		for(i=0;i<n;i++)
		{
			if()
		}


	}
	return 0;
}
