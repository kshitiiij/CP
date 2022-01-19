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
		ll arr[n];
		ll t[n];
		for(i=0;i<n;i++)
		{
			ll a;
			cin>>a;
			arr[i] = a;
			t[i] = a;
		}

		//t=arr;
		
		sort(t,t+n);

		ll step = -1;
		if(arr==t)
			step = 0;
		// else if(arr[0]==t[0] && arr[n-1]==t[n-1])
		// 	step =1;
		// else if(arr[0]!=t[0] || arr[n-1]!=t[n-1])
		// 	step=1;
		// else
		// 	step =2;

		cout<<step<<endl;

	}
	return 0;
}