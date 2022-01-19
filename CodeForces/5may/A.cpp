#include<bits/stdc++.h>
#include<cstring>
using namespace std;

typedef long long int ll;

bool check(char let[],char k)
{
	for(ll i=0;i<26;i++)
	{
		if(let[i]==k)
			return true;
	}
	return false;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		char let[26];
		memset(let,'y',sizeof(let));
		ll let_index=0;
		ll flag=0;
		if(n==1)
			{
				flag=0;
				let[let_index] = s[0];
			}

		else
		{		
			for(ll i=0;i<n;i++)
			{

				if(!check(let,s[i]))
				{
					let[let_index++] = s[i];
				}
				
				else if(check(let,s[i]) && s[i]!=s[i-1])
				{
					flag=1;
					break;
				}
			}
		}	

		// for(ll i=0;i<let_index;i++)
		// 	cout<<let[i]<<" ";
		// cout<<endl;

		if(flag==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;


	}
	return 0;

}