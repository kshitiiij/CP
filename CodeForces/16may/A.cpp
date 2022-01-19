#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,k;

ll gcd(ll a,ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     

}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>k;
		ll step=0;
		if(k==100)
			cout<<1<<endl;
		else
		{
			ll w;
			w = 100 - k;
			ll high = gcd(k,w);
			step = (k/high) + (w/high);
			cout<<step<<endl;
		}
	}
	return 0;
}