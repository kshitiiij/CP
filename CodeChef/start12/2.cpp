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
		ll num = 0;
		num = pow(10,n);
		num = num/3;
		cout<<num<<endl;
	}
	return 0;
}