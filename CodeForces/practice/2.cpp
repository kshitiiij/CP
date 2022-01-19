#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i;

int main()
{
	cin>>t;
	
	while(t--)
	{	
		ll count=0;
		cin>>n;
		
		if(n<9)
			cout<<0<<endl;
		else if(n%10==9)
			cout<<n/10+1<<endl;
		else
			cout<<n/10<<endl;
		
	}

	return 0;	
}