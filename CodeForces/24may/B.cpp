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
		sort(arr,arr+n); 
		vector<ll> len;
		// ll maxi = abs(arr[0])>abs(arr[n-1]) ? abs(arr[0]) : abs(arr[n-1]) ;
		ll maxi = arr[n-1];
		for(i=n-1;i>=1;i--)
		{
			ll diff = abs(arr[i]-arr[i-1]);
			//cout<<diff<<endl;
			if(diff>=maxi)
			{
				len.push_back(arr[i]);
				
			}
			else
				maxi = arr[i-1];
			

		}
		len.push_back(arr[0]);
		cout<<len.size()<<endl;
		
	}
	return 0;
}