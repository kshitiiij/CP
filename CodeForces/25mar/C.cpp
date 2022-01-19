#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


void solve()
{
	string s,t;
	cin>>s>>t;
	ll n = s.length();
	ll m = t.length();

	if(m>n)
	{
		swap(s,t);
		swap(n,m);
	}

	if(s==t)
	{
		cout<<0<<endl;
		return;
	}

	ll count=0;
	for(ll i=0;i<m;i++)
	{
		ll num=0;
		for(ll j=0;j<n;j++)
		{
			num=0;
			if(s[j]==t[i])
			{
				for(ll k=0;k+j<n;k++)
				{
					if(s[j+k]!=t[i+k])
						break;
					num++;
				}

				count = max(count,num);
			}
		}
	}
	cout<<n+m-2*count<<endl;
}


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}