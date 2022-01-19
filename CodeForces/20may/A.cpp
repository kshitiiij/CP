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
		ll p = log2(n);
		ll num = pow(2,p);
		cout<<num-1<<endl;

		
	}
	return 0;
}