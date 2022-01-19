#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll t,n,i;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll arr[n];
		ll step = 0;
		for(i=0;i<n;i++) cin>>arr[i];

		ll mini =n+1,maxi = 0;
		ll mini_i,maxi_i;
		for(i=0;i<n;i++)
		{
			if(arr[i]<mini)
			{
				mini = arr[i];
				mini_i = i;
			}
		}
		for(i=0;i<n;i++)
		{
			if(arr[i]>maxi)
			{
				maxi = arr[i];
				maxi_i = i;	
			}
		}
		
		ll left,right;
		if(mini_i<maxi_i)
		{
			left = mini_i +1;
			right = n - maxi_i;
		}
		else
		{
			left = maxi_i +1;
			right = n - mini_i;
		}

		step = min(left+right,min(left,right)+abs(maxi_i-mini_i));
		cout<<step<<endl;
		

		

	}
	return 0;
}
