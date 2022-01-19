#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n;

int main()
{
	cin>>n;
	ll x =0;
	while(n--)
	{
		string s;
		cin>>s;
		if(s == "X++" or s == "++X")
			x++;
		else if(s == "X--" or s == "--X")
			x--;
	}

	cout<<x<<endl;
	return 0;
}