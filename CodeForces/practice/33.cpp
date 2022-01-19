//Gravity Flip
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,k,i;

int main()
{
	cin>>n;
	ll arr[n];
	for(i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	for(i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	
	return 0;

}