#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,G,P;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>G>>P;
		ll arr[10];
		for(ll i=0;i<10;i++) cin>>arr[i];

		ll mini=0,maxi=0;
		ll days=0,remain=0;
		ll peep=0;
		for(ll i=9;i>=G;i--)
			peep += arr[i];
		days = peep/P;
		remain = peep - days*P;
		mini = days +1;
		if(remain + arr[G]<=P)
		    maxi = days +1;
		else
		    maxi = days+2;
		    
		cout<<mini<<" "<<maxi<<endl;
		
		
	}
	return 0;
}