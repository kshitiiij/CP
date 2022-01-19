#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i;

main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll arr[n];
		for(i=0;i<n;i++) cin>>arr[i];

		ll pair = 0;
		ll fir,sec;
		ll jump = 1;
		while(jump<n)
		{	
			for(i=0;i<n-jump;i++)
			{
				fir = jump;
				sec = arr[i+jump]-arr[i];
				if(fir==sec)
					pair++;
			}
			
		jump++;
		}

		cout<<pair<<endl;
	}
}