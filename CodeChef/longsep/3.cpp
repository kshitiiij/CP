#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i;



int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll arr[n];
		for(i=0;i<n;i++) cin>>arr[i];

		ll even =0;
		for(i=0;i<n;i++)
		{
			if(arr[i]%2==0)
				even++;
		}
		ll odd = n-even;
		ll ans =0;
		ll mini = min(odd,even);
		ans = 2*mini;
		double a = (n-mini*2);
		a /= 2;
		
		if(even>odd) 
			ans += ceil(a);
		if(odd>even) 
			ans += floor(a);
		
		cout<<ans<<endl;
	}
	return 0;
}