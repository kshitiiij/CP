//Puzzle
#include<bits/stdc++.h>
#include<limits>
using namespace std;
typedef long long int ll;
ll t,n,m,i;

int main()
{
	cin>>n>>m;
	ll arr[m];
	for(i=0;i<m;i++) cin>>arr[i];

	sort(arr,arr+m);
	ll mini = INT_MAX;

	for(i=0;i<m-n+1;i++) {
		if(arr[i+n-1]-arr[i]<mini)
			mini = arr[i+n-1]-arr[i];
	}

	cout<<mini<<endl;

	return 0;

}