//Kefa
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,k,i;

int main()
{
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++) cin>>arr[i];
	ll maxi =1,cur =1;

	for(i=0;i<n-1;i++) {
		if(arr[i+1]>=arr[i]) {
			cur++;
		}
		else {
			if(maxi<cur)
				maxi = cur;
			cur =1; 
		}

		if(cur>maxi)
			maxi = cur;
	}
	cout<<maxi<<endl;
	
	return 0;

}