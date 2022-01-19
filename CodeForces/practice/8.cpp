#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n;

int main()
{
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n = s.length();
		if(n>10)
			cout<<s[0]+to_string(n-2)+s[n-1]<<endl;
		else
			cout<<s<<endl;
	}
	return 0;
}