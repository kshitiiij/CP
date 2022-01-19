#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n,s,m;

int main()
{
	cin>>m>>s;
	ll n = 2*m+1;
	ll arr[m];
	for(int i=0;i<m;i++)
		cin>>arr[i];
	
	sort(arr,arr +n);
	ll diff;
	if((n)%2!=0)
		diff = arr[n/2 +1] - arr[n/2];
	else
		diff = arr[n/2 +1] - (arr[n/2]+arr[n/2-1])/2;

	if(s<diff)
	{
		if(n%2!=0)
			cout<<(arr[n/2]+s);
		else
			cout<<((arr[n/2]+arr[n/2-1])/2 + s);
	}
	else
	{
		
		for(int i=n;i>0;i--)
		{
			if(s==0)
				break;
			arr[i]++;
			s--;
		}
		if(n%2!=0)
			cout<<arr[n/2];
		else
			cout<<(arr[n/2]+arr[n/2-1])/2;

	}

	return 0;
}