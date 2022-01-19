#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,a,b,c,i,j;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		ll arr[n],s=0,one=0,zero=0,ans=0;
		for(i=0;i<n;i++) {
			cin>> arr[i];
			s += arr[i];
			if(arr[i]==1)
				one++;
			if(arr[i]==0)
				zero++;
		}
	


	if(one==0 and zero==0)
		cout<<0<<endl;
	else if(zero==0)
		cout<<one<<endl;
	else {
		ans += pow(2,zero);
		ans *= one;
		cout<<ans<<endl;
	}

	

			
		}
	
	return 0;
}