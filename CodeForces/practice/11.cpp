#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,k,i;



int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(i=0;i<n;i++) cin>>arr[i];

		ll flag ,t=0,sum=0;
		while(flag !=1)
		{
			flag =1;

			for(i=0;i<n;i++) {
				if( arr[i]==0) {
					flag=0;
					break;
				}
			}

			for(i=0;i<n;i++)
			{
				if(arr[i]>0 and i != n-1 and i!=0) {
					arr[i-1]++;
					arr[i+1]++;

				}
				else if(arr[i]>0 and i ==0) {
					arr[i+1]++;
					arr[n-1]++;
				}
				else if(arr[i]>0 and i == (n-1)) {
					arr[i-1]++;
					arr[0]++;
				}
			}
			t++;
		}
		for(i=0;i<n;i++)
			cout<<arr[i]<<" ";
		// for(i=0;i<n;i++)
		// 	sum += arr[i];
	}	
	return 0;
}