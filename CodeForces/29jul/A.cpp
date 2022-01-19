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
		for(i=0;i<n;i++)cin>>arr[i];
		ll max =0;

			for(i=0;i<n-1;i++)
			{
				if(arr[i]*arr[i+1]>max)
					max = arr[i]*arr[i+1];
			}
		cout<<max<<endl;
	}
	return 0;
}