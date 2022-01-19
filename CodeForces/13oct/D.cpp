//All are Same
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,a,b,c,i,j,k;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll fgcd(ll a[],ll n) {
	ll res =a[0];
	for(int i=1;i<n;i++) {
		cout<<a[i]<<" ";
		res = gcd(a[i],res);
		cout<<res<<endl;
		// if(res==1)
		// 	return 1;
	}
	return res;
}


int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		ll arr[n];
		ll mini = INT_MAX;
		for(i=0;i<n;i++) {
			cin>>arr[i];
			if(arr[i]<mini)
				mini = arr[i];
		}
		
		sort(arr,arr+n);
		for(i=0;i<n;i++) {
			if(arr[i]==mini)
				arr[i] =1;
			else
				arr[i] -= mini;
		}

		// for(i=0;i<n;i++)
			// cout<<arr[i]<<" ";
		cout<<fgcd(arr,n)<<endl;

		
	}
	return 0;
}