#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,a,b;


int main()
{
	cin>>t;
	while(t--)
	{
		string s;
		cin>>n>>a>>b;
		cin>>s;
		ll time =0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
				time+=a;
			if(s[i]=='1')
				time+=b;
		}
		cout<<time<<endl;
	}
	return 0;
}