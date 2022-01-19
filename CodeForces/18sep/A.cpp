#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i;


int main()
{
	cin>>t;
	while(t--)
	{
		string s;
		cin>>n;
		cin>>s;
		ll count =0;
		for(i=0;i<n;i++)
		{
			if(s[i] != '0' and i!=(n-1)) {
				count += s[i] - '0';
				count++;
			}
			else 
				count += s[i] - '0';
		}

		cout<<count<<endl;
	}

	return 0;
}