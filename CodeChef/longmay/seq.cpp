#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,k,i;
ll sum=0;

ll gcd(ll a, ll b)
{
	if(b==0)
		return a;
	return gcd(b, a%b);
}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>k;
		sum=0;
		for(i=1;i<2*k+1;i++)
		{
			sum += gcd(k+pow(i,2),k+pow(i+1,2));
		}
		cout<<sum<<endl;
	}
	return 0;
}