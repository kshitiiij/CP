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
		char s[n],str[n];
		char a;
		for(i=0;i<n;i++)
		{
			cin>>a;
			s[i] = a;
			str[i] = a;
		}

		sort(s,s+n);
		
		ll k=0;
		for(i=0;i<n;i++)
		{
			if(s[i]!=str[i])
				k++;
		}
		cout<<k<<endl;
	}

	return 0;	
}