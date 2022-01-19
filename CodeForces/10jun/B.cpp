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
		float avg =0;
		for(i=0;i<n;i++) {
			cin>>arr[i];
			avg += arr[i];
		} 
		avg = avg/n;
		ll k=0;
		if(avg != floor(avg))
			cout<<-1<<endl;
		else
		{
			for(i=0;i<n;i++)
			{
				if(arr[i]>avg)
					k++;
			}
			cout<<k<<endl;
		}

		

			


		
		
		

		

	}
	return 0;
}
