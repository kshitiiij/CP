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
		for(i=0;i<n;i++)
			cin>>arr[i];
		ll step=0;
		ll flag=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]>i+1 && flag==0)
			{
				step++;
				flag=1;
			}
			else if(arr[i]<=i+1)
				flag=0;
		}
		cout<<step<<endl;
	}
	return 0;
}