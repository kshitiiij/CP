#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll n,i;

int main()
{
	ll n,den =0;
	cin>>n;
	ll arr[n];
	
	ll left,right,sum=0,total =0;
	for(i=0;i<n;i++) { 
		cin>>arr[i];
		total += arr[i]; 
	}
	bool sereja = true;
	left =0; right = n-1;
	while(left<=right) {
		if(sereja) {
			if(arr[left]>arr[right]) {
				sum += arr[left];
				sereja = !sereja;
				left++;
			}
			else {
				sum += arr[right];
				sereja = !sereja;
				right--;
			}
		}
		else {
			if(arr[left]>arr[right]) {
				left++;
				sereja = !sereja;
			}
			else {
				right--;
				sereja = !sereja;
			}
		}

	}

	cout<<sum<<" "<<(total - sum)<<endl;


	return 0;
}