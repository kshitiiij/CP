#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,k,i;

int main()
{
	cin>>t;
	vector<ll> vec;
	while(t--)
	{
		cin>>n>>k;
		ll arr[n],flag=1;
		
		for(i=0;i<n;i++) {
		    cin>>arr[i];
		    if(arr[i]==0)
		        flag =0;
		}
		ll sum=0;
		
		while(flag !=1 and k>0)
		{
			k--;
			for(i=0;i<n;i++)
			{
			    if(arr[i]>0) {
			        vec.push_back(i);
			    }
			}
			for(auto i:vec)
			{
			    if(i==0) {
					arr[i+1]++;
					arr[n-1]++;
				}
				else if(i == (n-1)) {
					arr[i-1]++;
					arr[0]++;
				}
				else {
					arr[i-1]++;
					arr[i+1]++;
				}
			}
			vec.clear();
	
			flag =1;
			for(i=0;i<n;i++) {
				if( arr[i]==0) {
					flag=0;
					break;
				}
			}

		}

		for(i=0;i<n;i++)
			sum += arr[i];
			
		sum += 2*n*(k);
		cout<<sum<<endl;
	}	
	return 0;
}