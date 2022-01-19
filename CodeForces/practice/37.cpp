//Gamer Hemose
#include<bits/stdc++.h>
#include<limits>
using namespace std;
typedef long long int ll;
ll t,n,h,m,i;

int main()
{
	cin>>t;
	while(t--) {
		cin>>n>>h;
		ll arr[n];
		for(i=0;i<n;i++) cin>>arr[i];

		sort(arr,arr+n,greater<ll>());

		ll count =0,num1=arr[0],num2=arr[1];
		
		if(h<=num1)
			cout<<1<<endl;
		else if(h<=(num1+num2))
			cout<<2<<endl;
		else {
			count = (h/(num1+num2));
			count *=2;
			ll rem = h%(num1+num2);
			if(rem>0) {
				if(rem<=num1)
					count++;
				else
					count +=2;
			}
			cout<<count<<endl;
		}
	}
	return 0;

}