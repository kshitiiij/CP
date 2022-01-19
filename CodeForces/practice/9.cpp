#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n,a,b,c;

int main()
{
	cin>>n;
	ll sum =0;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if(a&b == 1 or b&c == 1 or a&c == 1)
			sum++;
	}
	cout<<sum<<endl;

	return 0;
}