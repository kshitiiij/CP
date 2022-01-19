//Xenia
#include<bits/stdc++.h>
#include<limits>
using namespace std;
typedef long long int ll;
ll t,n,h,m,i;

int main()
{
	cin>>n>>m;
	ll arr[m];
	for(i=0;i<m;i++) cin>>arr[i];

	ll time=0;

	for(i=0;i<m-1;i++) {
		if(i==0)
			time += arr[i]-1;
		if(arr[i]<arr[i+1])
			time += arr[i+1]-arr[i];
		else if(arr[i]>arr[i+1])
			time += n-arr[i] + arr[i+1];
	}
	cout<<time<<endl;
	return 0;

}