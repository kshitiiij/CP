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
		ll mini = 101;
		for(i=0;i<n;i++) 
		{
				cin>>arr[i];
				if(arr[i]<mini)
					mini = arr[i];
		}
		ll flag = 0;
		for(i=0;i<n;i++)
		{
			if(arr[i]==mini)
				flag++;
		}
		cout<<n-flag<<endl;
	}
	return 0;
}