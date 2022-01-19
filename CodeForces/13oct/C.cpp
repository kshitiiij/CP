//Mouse
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,a,b,c,i,j,k;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n>>k;
		ll arr[k];
		ll count =0,sum=0;
		for(i=0;i<k;i++) cin>>arr[i];

		for(i=0;i<k;i++)
			arr[i] = n - arr[i];
		
		sort(arr,arr+k);
		
		sum = arr[0];
		for(i=1;i<k;i++) {

			if(sum<n) {
				count++;
				sum += arr[i];
				
			}
			else 
				break;
		}
		cout<<count<<endl;
	
		
	}
	return 0;
}