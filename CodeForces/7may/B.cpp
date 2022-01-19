#include<bits/stdc++.h>
#include<cstring>
using namespace std;

typedef long long int ll;
ll t,n,i,x,y;

bool gcd(ll a,ll b)
{
	if(b==0)
	{
		if(a==1)
			return true;
		else
			return false;
	}
	return gcd(b, a % b);

}


int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll arr[n];
		for(i=0;i<n;i++) cin>>arr[i];

		
		 ll count=0;
		//cout<<gcd(5,6)<<endl;;
		count=0;


		//cout<<gcd(9,6);

		for(i=2;i<n;i++)
		{
			if(!gcd(arr[i-1],arr[i]))
			{
				ll m1 = min(arr[i-1],arr[i]);
				ll m2 = 2*m1 - 1;
				if(gcd(arr[i-2],m2))
				{
					arr[i-1] = m2;
					arr[i] = m1;
				}
				else
				{
					a[i] = m2;
					a[i-1] = m1;
				}


			}
		}

		for(i=0;i<n;i++)
			cout<<arr[i];


	}
	return 0;
}