#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll t,n,i;

int main()
{
	ll s;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		ll sum=0;
		sum = (n*(n+1))/2;	
		if((sum - s)>=1 and (sum -s)<=n)
			cout<<(sum-s)<<endl;
		else
			cout<<-1<<endl;
		

	}

	
	return 0;
}
