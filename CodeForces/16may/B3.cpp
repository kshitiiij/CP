#include<bits/stdc++.h>
#include<vector>
using namespace std;

typedef long long int ll;
ll t,n;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<ll> arr;
		vector<ll> temp;
		for(ll i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			
			arr.push_back(a);
			temp.push_back(a);
		}

		sort(temp.begin(),temp.end());

		if(arr==temp)
			cout<<0<<endl;
		else if(arr[0]==n && arr[n-1]==1)
			cout<<3<<endl;
		else if(arr[0]==1 && arr[n-1]==n)
			cout<<1<<endl;
		else if(arr[0]!=1 && arr[n-1]!=n)
			cout<<2<<endl;
		else if(arr[0]!=1 || arr[n-1]!=n)
			cout<<1<<endl;
		


	}
	return 0;
}