#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i;

int main()
{
		cin>>n;
		ll arr[n];
		for(i=0;i<n;i++) cin>>arr[i];

		ll health = 0, count = 0;
		ll neg[n];
		ll nega = 0;
		for(i=0;i<n;i++)
		{
			if(arr[i]<0)
				neg[nega++] = arr[i];
		}

		// for(i=0;i<nega;i++)
		// 	cout<<neg[i]<<" ";

		
		for(i=0;i<n;i++)
		{
			if(arr[i]>=0)
			{
				health += arr[i];
				count++;
			}
		}

		cout<<health<<count;
		ll h =  health;
		ll neg_count = 0;
		ll cneg = 0;
		

	for(ll j=0;j<nega;j++)
	{	
		if(neg_count>cneg)
				cneg = neg_count;

		neg_count = 0;
		for(i=j;i<nega;i++)
		{
			

			if(h+neg[i]>=0)
			{	
				h += neg[i];
				
				neg_count++;
			}
			else 
				break;
		}
		h = health;
		
	}	
		//cout<<cneg+count<<endl;
		

		
	
	return 0;
}