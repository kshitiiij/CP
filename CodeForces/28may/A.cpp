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
		n = 2*n;
		ll arr[n];
		
		 
		
		for(i=0;i<n;i++) 
		{
			cin>>arr[i];		
		}

		sort(arr,arr+ n);
		i = 0;
		ll j = n-1;

		while(i<j)
		{
			cout<<arr[i]<<" ";
			cout<<arr[j]<<" ";
			i++;
			j--;
		}
		cout<<endl;
		
		
	}
	return 0;
}