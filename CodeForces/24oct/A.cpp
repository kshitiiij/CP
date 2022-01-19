#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,a,b,c,i,j;

int main()
{
	cin>>t;
	while(t--) {
		cin>>a>>b>>c;
		ll sum = 3*c + 2*b + a;
		if(sum%2==0)
			cout<<0<<endl;
		else
			cout<<1<<endl;

			
		
	}
	return 0;
}